/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/Array.h>
#include <aws/crt/Types.h>

#include <condition_variable>
#include <memory>
#include <mutex>

namespace Aws {
namespace Http {
class HttpClient;
class HttpRequest;
class HttpResponse;
class Connection;
class ClientStream;
}  // namespace Http
namespace Utils {
namespace Stream {

/**
 * Write-only streambuf that pushes data to an HTTP/2 connection via ClientStream::WriteData.
 *
 * Lifecycle: construct → Initialize() → write via ostream → Close() → WaitForStreamComplete().
 * Close() sends endStream=true. Destructor calls Close() + WaitForStreamComplete().
 *
 * Not copyable or movable. CRT HTTP client only.
 */
class AWS_CORE_API HttpWriteDataStreamBuf : public std::streambuf {
 public:
  explicit HttpWriteDataStreamBuf(const std::shared_ptr<Aws::Http::HttpClient>& client, size_t bufferLength = 8 * 1024);
  HttpWriteDataStreamBuf(const HttpWriteDataStreamBuf& other) = delete;
  HttpWriteDataStreamBuf(HttpWriteDataStreamBuf&& other) noexcept = delete;
  HttpWriteDataStreamBuf& operator=(const HttpWriteDataStreamBuf& other) = delete;
  HttpWriteDataStreamBuf& operator=(HttpWriteDataStreamBuf&& other) noexcept = delete;
  ~HttpWriteDataStreamBuf() override;

  /**
   * Acquires a connection and creates a client stream. Must be called before any writes.
   * Returns an error if connection acquisition or stream creation fails.
   */
  Aws::Crt::Optional<Aws::Client::AWSError<Aws::Client::CoreErrors>> Initialize(const std::shared_ptr<Aws::Http::HttpRequest>& request);

  /**
   * Flushes remaining buffer with endStream=true. Idempotent.
   * Does not block on stream completion — call WaitForStreamComplete() for that.
   */
  void Close();

  /**
   * Returns the HTTP response from the underlying stream. Must be called after Initialize().
   */
  std::shared_ptr<Aws::Http::HttpResponse> GetResponse() const;

  /**
   * Blocks until the CRT fires the stream-complete callback.
   * No-op if Initialize() was never called. Close() must be called first.
   */
  void WaitForStreamComplete();

 protected:
  // Write support
  int_type overflow(int_type c) override;
  std::streamsize xsputn(const char* s, std::streamsize n) override;
  int sync() override;

  // Disable reads
  int_type underflow() override { return traits_type::eof(); }
  int_type uflow() override { return traits_type::eof(); }
  std::streamsize xsgetn(char*, std::streamsize) override { return 0; }
  int_type pbackfail(int_type) override { return traits_type::eof(); }

  // Disable seeking
  pos_type seekoff(off_type, std::ios_base::seekdir, std::ios_base::openmode) override { return pos_type(off_type(-1)); }
  pos_type seekpos(pos_type, std::ios_base::openmode) override { return pos_type(off_type(-1)); }

 private:
  /**
   * Sends buffer contents via WriteData, blocks until completion callback fires.
   * Returns false on error.
   */
  bool SendBuffer(bool endStream = false);
  void ResetPutArea();

  // Client state
  std::shared_ptr<Aws::Http::HttpClient> m_client;
  std::shared_ptr<Aws::Http::Connection> m_connection;
  std::shared_ptr<Aws::Http::ClientStream> m_stream;

  // Data buffer
  Aws::Utils::Array<unsigned char> m_buffer;

  // WriteData synchronization
  std::mutex m_writeMutex;
  std::condition_variable m_writeComplete;
  bool m_writeInProgress{false};
  bool m_writeError{false};

  // State management
  enum class STATE {
    UNINITIALIZED,
    INITIALIZED,
    SHUT_DOWN,
  } m_state{STATE::UNINITIALIZED};
  std::condition_variable m_shutdownCondition;
  std::mutex m_shutdownMutex;
  bool m_streamComplete{false};
};
}  // namespace Stream
}  // namespace Utils
}  // namespace Aws
