/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpClientStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/crt/Types.h>

#include <utility>

struct ConnectionTestCase {
  Aws::Crt::Optional<Aws::Client::AWSError<Aws::Client::CoreErrors>> connectionError{};
  int connectionErrorCode{0};
  int streamCompleteErrorCode{0};
  int writeDataErrorCode{0};
  int writeDataCompleteErrorCode{0};
  std::shared_ptr<Aws::IOStream> writeDataStream;
  std::shared_ptr<Aws::Http::HttpResponse> response;
  bool withholdWriteComplete{false};
  bool withholdStreamComplete{false};
  std::shared_ptr<int> closeCount;
};

class MockClientStream : public Aws::Http::ClientStream {
 public:
  MockClientStream(const ConnectionTestCase& testCase, std::function<void(int errorCode)> onStreamComplete)
      : m_testCase{testCase}, m_onStreamComplete{std::move(onStreamComplete)} {}
  ~MockClientStream() override = default;

  bool Activate() override { return true; }

  int WriteData(std::shared_ptr<Aws::IOStream> stream, const std::function<void(int errorCode)>& onComplete, bool endStream) override {
    *m_testCase.writeDataStream << stream->rdbuf();
    if (m_testCase.withholdWriteComplete) {
      m_pendingWriteComplete = onComplete;
    } else {
      onComplete(m_testCase.writeDataCompleteErrorCode);
    }
    if (endStream && !m_testCase.withholdStreamComplete) {
      m_onStreamComplete(m_testCase.streamCompleteErrorCode);
    }
    return m_testCase.writeDataErrorCode;
  }

  std::shared_ptr<Aws::Http::HttpResponse> GetResponse() const override { return m_testCase.response; }

  void FireCompletionOnClose() {
    if (m_pendingWriteComplete) {
      auto cb = m_pendingWriteComplete;
      m_pendingWriteComplete = nullptr;
      cb(1);
    }
    m_onStreamComplete(1);
  }

  void FireStreamComplete(int errorCode) { m_onStreamComplete(errorCode); }

 private:
  ConnectionTestCase m_testCase;
  std::function<void(int errorCode)> m_onStreamComplete;
  std::function<void(int errorCode)> m_pendingWriteComplete;
};

class MockConnection : public Aws::Http::Connection {
 public:
  MockConnection(const ConnectionTestCase& testCase) : m_testCase{testCase} {}
  ~MockConnection() override = default;
  std::shared_ptr<Aws::Http::ClientStream> NewClientStream(const std::shared_ptr<Aws::Http::HttpRequest>& request,
                                                           std::function<void(int errorCode)> onStreamComplete) override {
    AWS_UNREFERENCED_PARAM(request);
    auto stream = Aws::MakeShared<MockClientStream>("MockConnection", m_testCase, std::move(onStreamComplete));
    m_stream = stream;
    return stream;
  }

  void Close() override {
    if (m_testCase.closeCount) {
      ++(*m_testCase.closeCount);
    }
    if (auto stream = m_stream.lock()) {
      static_cast<MockClientStream*>(stream.get())->FireCompletionOnClose();
    }
  }

  void FireStreamComplete(int errorCode) {
    if (auto stream = m_stream.lock()) {
      static_cast<MockClientStream*>(stream.get())->FireStreamComplete(errorCode);
    }
  }

 private:
  ConnectionTestCase m_testCase;
  std::weak_ptr<Aws::Http::ClientStream> m_stream;
};
