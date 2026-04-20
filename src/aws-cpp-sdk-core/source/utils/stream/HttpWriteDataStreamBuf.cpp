/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/http/HttpClient.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>

#include <utility>

namespace {
const char* WRITE_DATA_BUF_LOG_NAME = "HttpWriteDataStreamBuf";
}

Aws::Utils::Stream::HttpWriteDataStreamBuf::HttpWriteDataStreamBuf(const std::shared_ptr<Aws::Http::HttpClient>& client,
                                                                   size_t bufferLength)
    : m_client{client}, m_buffer{bufferLength} {
  ResetPutArea();
}

void Aws::Utils::Stream::HttpWriteDataStreamBuf::ResetPutArea() {
  auto* base = reinterpret_cast<char*>(m_buffer.GetUnderlyingData());
  setp(base, base + m_buffer.GetLength());
}

Aws::Utils::Stream::HttpWriteDataStreamBuf::~HttpWriteDataStreamBuf() {
  Close();
  WaitForStreamComplete();
}

Aws::Crt::Optional<Aws::Client::AWSError<Aws::Client::CoreErrors>> Aws::Utils::Stream::HttpWriteDataStreamBuf::Initialize(
    const std::shared_ptr<Aws::Http::HttpRequest>& request) {
  std::mutex acquireMutex;
  std::condition_variable acquireCondition;
  bool connectionAcquired = false;
  Aws::Crt::Optional<Aws::Client::AWSError<Aws::Client::CoreErrors>> error;

  // Callback captures stack locals by reference. This is safe because
  // we block on acquireCondition.wait() below, keeping the stack frame
  // alive until the callback has fired.
  m_client->AcquireConnection(request,
                              [&acquireMutex, &acquireCondition, &connectionAcquired, &error, this](
                                  std::shared_ptr<Aws::Http::Connection> connection, int errorCode) -> void {
                                {
                                  std::unique_lock<std::mutex> const lock{acquireMutex};
                                  if (errorCode != AWS_ERROR_SUCCESS) {
                                    error =
                                        Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::NETWORK_CONNECTION, false);
                                  }
                                  m_connection = std::move(connection);
                                  connectionAcquired = true;
                                }
                                acquireCondition.notify_all();
                              });

  std::unique_lock<std::mutex> lock{acquireMutex};
  acquireCondition.wait(lock, [&connectionAcquired]() -> bool { return connectionAcquired; });

  if (error.has_value()) {
    return error;
  }

  m_stream = m_connection->NewClientStream(request, [this](int errorCode) -> void {
    {
      std::unique_lock<std::mutex> const lock{m_shutdownMutex};
      if (errorCode != AWS_ERROR_SUCCESS) {
        AWS_LOGSTREAM_ERROR(WRITE_DATA_BUF_LOG_NAME, "Stream completed with error: " << errorCode);
        m_writeError = true;
      }
      m_streamComplete = true;
    }
    m_shutdownCondition.notify_all();
  });

  if (!m_stream) {
    return Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::NETWORK_CONNECTION, false);
  }

  m_stream->Activate();
  m_state = STATE::INITIALIZED;
  return error;
}

void Aws::Utils::Stream::HttpWriteDataStreamBuf::Close() {
  {
    std::unique_lock<std::mutex> const lock{m_shutdownMutex};
    if (m_state != STATE::INITIALIZED) {
      return;
    }
    m_state = STATE::SHUT_DOWN;
  }

  SendBuffer(/*endStream=*/true);
}

std::shared_ptr<Aws::Http::HttpResponse> Aws::Utils::Stream::HttpWriteDataStreamBuf::GetResponse() const {
  assert(m_stream);
  return m_stream->GetResponse();
}

void Aws::Utils::Stream::HttpWriteDataStreamBuf::WaitForStreamComplete() {
  std::unique_lock<std::mutex> lock{m_shutdownMutex};
  if (m_state == STATE::UNINITIALIZED) {
    return;
  }
  m_shutdownCondition.wait(lock, [this]() -> bool { return m_streamComplete; });
}

std::streambuf::int_type Aws::Utils::Stream::HttpWriteDataStreamBuf::overflow(std::streambuf::int_type c) {
  if (traits_type::eq_int_type(c, traits_type::eof())) {
    return traits_type::not_eof(c);
  }

  if (!SendBuffer(false)) {
    return traits_type::eof();
  }

  *pptr() = traits_type::to_char_type(c);
  pbump(1);
  return c;
}

std::streamsize Aws::Utils::Stream::HttpWriteDataStreamBuf::xsputn(const char* s, std::streamsize n) {
  std::streamsize written = 0;
  while (written < n) {
    std::streamsize const space = epptr() - pptr();
    std::streamsize const chunk = std::min(space, n - written);

    std::memcpy(pptr(), s + written, static_cast<size_t>(chunk));
    pbump(static_cast<int>(chunk));
    written += chunk;

    if (pptr() == epptr()) {
      if (!SendBuffer(false)) {
        return written;
      }
    }
  }
  return written;
}

int Aws::Utils::Stream::HttpWriteDataStreamBuf::sync() {
  return SendBuffer(false) ? 0 : -1;
}

bool Aws::Utils::Stream::HttpWriteDataStreamBuf::SendBuffer(bool endStream) {
  if (!endStream && (m_writeError || m_state != STATE::INITIALIZED)) {
    return false;
  }

  auto data = Aws::MakeShared<Aws::StringStream>(WRITE_DATA_BUF_LOG_NAME);
  data->write(pbase(), pptr() - pbase());

  m_writeInProgress = true;

  m_stream->WriteData(
      data,
      [this](int errorCode) -> void {
        std::unique_lock<std::mutex> const lock{m_writeMutex};
        m_writeInProgress = false;
        m_writeError = (errorCode != AWS_ERROR_SUCCESS);
        m_writeComplete.notify_one();
      },
      endStream);

  std::unique_lock<std::mutex> lock{m_writeMutex};
  m_writeComplete.wait(lock, [this]() -> bool { return !m_writeInProgress; });

  ResetPutArea();

  return !m_writeError;
}
