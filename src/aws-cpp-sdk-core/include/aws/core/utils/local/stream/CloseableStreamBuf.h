/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <memory>

namespace Aws {
namespace Utils {
namespace Stream {
class HttpWriteDataStreamBuf;

class CloseableStreamBuf {
 public:
  explicit CloseableStreamBuf(std::shared_ptr<std::streambuf> streambuf) : m_streambuf(std::move(streambuf)) {}
  std::streambuf* GetStreamBufHandler() { return m_streambuf.get(); }
  virtual ~CloseableStreamBuf() = default;
  virtual bool WaitForDrain(int64_t timeout);
  virtual void Close(Aws::IOStream* pStreamToClose = nullptr);

 private:
  std::shared_ptr<std::streambuf> m_streambuf;
};

class CloseableConcurrentStreamBuf : public Aws::Utils::Stream::CloseableStreamBuf {
 public:
  explicit CloseableConcurrentStreamBuf(size_t bufferSize);
  bool WaitForDrain(int64_t timeoutMs) override;
  void Close(Aws::IOStream* stream) override;
};

class CloseableHttpWriteDataStreamBuf : public Aws::Utils::Stream::CloseableStreamBuf {
 public:
  explicit CloseableHttpWriteDataStreamBuf(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf);
  void Close(Aws::IOStream* stream) override;
};
}  // namespace Stream
}  // namespace Utils
}  // namespace Aws