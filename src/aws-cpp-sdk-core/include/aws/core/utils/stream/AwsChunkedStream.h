/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/crypto/Hash.h>

namespace Aws {
namespace Utils {
namespace Stream {

static const size_t AWS_DATA_BUFFER_SIZE = 65536;

template <size_t DataBufferSize = AWS_DATA_BUFFER_SIZE>
class AwsChunkedStream {
 public:
  AwsChunkedStream(Http::HttpRequest *request, const std::shared_ptr<Aws::IOStream> &stream)
      : m_chunkingStream{Aws::MakeShared<StringStream>("AwsChunkedStream")}, m_request(request), m_stream(stream) {
    assert(m_stream != nullptr);
    if (m_stream == nullptr) {
      AWS_LOGSTREAM_ERROR("AwsChunkedStream", "stream is null");
    }
    assert(request != nullptr);
    if (request == nullptr) {
      AWS_LOGSTREAM_ERROR("AwsChunkedStream", "request is null");
    }
  }

  size_t BufferedRead(char *dst, size_t amountToRead) {
    assert(dst != nullptr);
    if (dst == nullptr) {
      AWS_LOGSTREAM_ERROR("AwsChunkedStream", "dst is null");
    }

    // the chunk has ended and cannot be read from
    if (m_chunkEnd) {
      return 0;
    }

    // If we've read all of the underlying stream write the checksum trailing header
    // the set that the chunked stream is over.
    if (m_stream->eof() && !m_stream->bad() && (m_chunkingStream->eof() || m_chunkingStream->peek() == EOF)) {
      return writeTrailer(dst, amountToRead);
    }

    // Try to read in a 64K chunk, if we cant we know the stream is over
    size_t bytesRead = 0;
    while (m_stream->good() && bytesRead < DataBufferSize) {
      m_stream->read(&m_data[bytesRead], DataBufferSize - bytesRead);
      bytesRead += static_cast<size_t>(m_stream->gcount());
    }

    if (bytesRead > 0) {
      writeChunk(bytesRead);
    }

    // Read to destination buffer, return how much was read
    m_chunkingStream->read(dst, amountToRead);
    return static_cast<size_t>(m_chunkingStream->gcount());
  }

 private:
  size_t writeTrailer(char *dst, size_t amountToRead) {
    Aws::StringStream chunkedTrailerStream;
    chunkedTrailerStream << "0\r\n";
    if (m_request->GetRequestHash().second != nullptr) {
      chunkedTrailerStream << "x-amz-checksum-" << m_request->GetRequestHash().first << ":"
                           << HashingUtils::Base64Encode(m_request->GetRequestHash().second->GetHash().GetResult()) << "\r\n";
    }
    chunkedTrailerStream << "\r\n";
    const auto chunkedTrailer = chunkedTrailerStream.str();
    auto trailerSize = chunkedTrailer.size();
    // unreferenced param for assert
    AWS_UNREFERENCED_PARAM(amountToRead);
    assert(amountToRead >= trailerSize);
    memcpy(dst, chunkedTrailer.c_str(), trailerSize);
    m_chunkEnd = true;
    return trailerSize;
  }

  void writeChunk(size_t bytesRead) {
    if (m_request->GetRequestHash().second != nullptr) {
      m_request->GetRequestHash().second->Update(reinterpret_cast<unsigned char *>(m_data.GetUnderlyingData()), bytesRead);
    }

    if (m_chunkingStream != nullptr && !m_chunkingStream->bad()) {
      *m_chunkingStream << Aws::Utils::StringUtils::ToHexString(bytesRead) << "\r\n";
      m_chunkingStream->write(m_data.GetUnderlyingData(), bytesRead);
      *m_chunkingStream << "\r\n";
    }
  }

  Aws::Utils::Array<char> m_data{DataBufferSize};
  std::shared_ptr<Aws::IOStream> m_chunkingStream;
  bool m_chunkEnd{false};
  Http::HttpRequest *m_request{nullptr};
  std::shared_ptr<Aws::IOStream> m_stream;
};
}  // namespace Stream
}  // namespace Utils
}  // namespace Aws
