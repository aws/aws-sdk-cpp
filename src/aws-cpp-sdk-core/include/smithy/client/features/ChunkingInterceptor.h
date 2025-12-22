/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/interceptor/Interceptor.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>
#include <memory>

namespace smithy {
namespace client {
namespace features {

static const size_t AWS_DATA_BUFFER_SIZE = 65536;
static const char* ALLOCATION_TAG = "ChunkingInterceptor";
static const char* CHECKSUM_HEADER_PREFIX = "x-amz-checksum-";

template <size_t DataBufferSize = AWS_DATA_BUFFER_SIZE>
class AwsChunkedStreamBuf : public std::streambuf {
public:
    AwsChunkedStreamBuf(Aws::Http::HttpRequest* request,
                        const std::shared_ptr<Aws::IOStream>& stream,
                        size_t bufferSize = DataBufferSize)
        : m_request(request),
          m_stream(stream),
          m_data(bufferSize)
    {
        assert(m_stream != nullptr);
        if (m_stream == nullptr) {
            AWS_LOGSTREAM_ERROR("AwsChunkedStream", "stream is null");
        }
        assert(m_request != nullptr);
        if (m_request == nullptr) {
            AWS_LOGSTREAM_ERROR("AwsChunkedStream", "request is null");
        }
    }

protected:
    int_type underflow() override {
        if (gptr() && gptr() < egptr()) {
            return traits_type::to_int_type(*gptr());
        }

        // only read and write to chunked stream if the underlying stream
        // is still in a valid state and we have buffer space
        if (m_stream->good() && m_chunkingBufferPos >= m_chunkingBufferSize) {
            // Reset buffer for new data only when buffer is consumed
            m_chunkingBufferPos = 0;
            m_chunkingBufferSize = 0;
            
            // Check if we have enough space for worst-case chunk (data + header + footer)
            size_t maxChunkSize = m_data.GetLength() + 20; // data + hex header + CRLF
            if (m_chunkingBufferSize + maxChunkSize <= m_chunkingBuffer.GetLength()) {
                // Try to read in a 64K chunk, if we cant we know the stream is over
                m_stream->read(m_data.GetUnderlyingData(), m_data.GetLength());
                size_t bytesRead = static_cast<size_t>(m_stream->gcount());
                writeChunk(bytesRead);

                // if we've read everything from the stream, we want to add the trailer
                // to the underlying stream
                if ((m_stream->peek() == EOF || m_stream->eof()) && !m_stream->bad()) {
                    writeTrailerToUnderlyingStream();
                }
            }
        }

        // if the chunking buffer is empty there is nothing to read
        if (m_chunkingBufferPos >= m_chunkingBufferSize) {
            return traits_type::eof();
        }

        // Set up buffer pointers to read from chunking buffer
        size_t remainingBytes = m_chunkingBufferSize - m_chunkingBufferPos;
        size_t bytesToRead = std::min(remainingBytes, DataBufferSize);
        
        setg(m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferPos, 
             m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferPos, 
             m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferPos + bytesToRead);
        
        m_chunkingBufferPos += bytesToRead;
        
        return traits_type::to_int_type(*gptr());
    }

private:
    void writeTrailerToUnderlyingStream() {
        Aws::String trailer = "0\r\n";
        if (m_request->GetRequestHash().second != nullptr) {
            trailer += "x-amz-checksum-" + m_request->GetRequestHash().first + ":"
                     + Aws::Utils::HashingUtils::Base64Encode(m_request->GetRequestHash().second->GetHash().GetResult()) + "\r\n";
        }
        trailer += "\r\n";
        if (m_chunkingBufferSize + trailer.length() <= m_chunkingBuffer.GetLength()) {
            std::memcpy(m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferSize, trailer.c_str(), trailer.length());
            m_chunkingBufferSize += trailer.length();
        }
    }

    void writeChunk(size_t bytesRead) {
        if (m_request->GetRequestHash().second != nullptr) {
            m_request->GetRequestHash().second->Update(reinterpret_cast<unsigned char*>(m_data.GetUnderlyingData()), bytesRead);
        }

        if (bytesRead > 0) {
            Aws::String chunkHeader = Aws::Utils::StringUtils::ToHexString(bytesRead) + "\r\n";
            size_t totalSize = chunkHeader.length() + bytesRead + 2;
            if (m_chunkingBufferSize + totalSize <= m_chunkingBuffer.GetLength()) {
                std::memcpy(m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferSize, chunkHeader.c_str(), chunkHeader.length());
                m_chunkingBufferSize += chunkHeader.length();
                std::memcpy(m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferSize, m_data.GetUnderlyingData(), bytesRead);
                m_chunkingBufferSize += bytesRead;
                std::memcpy(m_chunkingBuffer.GetUnderlyingData() + m_chunkingBufferSize, "\r\n", 2);
                m_chunkingBufferSize += 2;
            }
        }
    }

    // Buffer for chunked data plus overhead for HTTP chunked encoding headers, trailers, and safety margin
    Aws::Utils::Array<char> m_chunkingBuffer{DataBufferSize + 128};
    size_t m_chunkingBufferSize{0};
    size_t m_chunkingBufferPos{0};
    Aws::Http::HttpRequest* m_request{nullptr};
    std::shared_ptr<Aws::IOStream> m_stream;
    Aws::Utils::Array<char> m_data;
};

class AwsChunkedIOStream : public Aws::IOStream {
public:
    AwsChunkedIOStream(Aws::Http::HttpRequest* request,
                       const std::shared_ptr<Aws::IOStream>& originalBody,
                       size_t bufferSize = AWS_DATA_BUFFER_SIZE)
        : Aws::IOStream(&m_buf),
          m_buf(request, originalBody, bufferSize) {}

private:
    AwsChunkedStreamBuf<> m_buf;
};

/**
 * Interceptor that handles chunked encoding for streaming requests with checksums.
 * Wraps request body with chunked stream and sets appropriate headers.
 */
class ChunkingInterceptor : public smithy::interceptor::Interceptor {
public:
    explicit ChunkingInterceptor(Aws::Client::HttpClientChunkedMode httpClientChunkedMode)
        : m_httpClientChunkedMode(httpClientChunkedMode) {}
    ~ChunkingInterceptor() override = default;

    ModifyRequestOutcome ModifyBeforeSigning(smithy::interceptor::InterceptorContext& context) override {
        auto request = context.GetTransmitRequest();

        if (!ShouldApplyChunking(request)) {
            return request;
        }

        auto originalBody = request->GetContentBody();
        if (!originalBody) {
            return request;
        }

        // Set up chunked encoding headers for checksum calculation
        const auto& hashPair = request->GetRequestHash();
        if (hashPair.second != nullptr) {
            Aws::String checksumHeaderValue = Aws::String(CHECKSUM_HEADER_PREFIX) + hashPair.first;
            request->DeleteHeader(checksumHeaderValue.c_str());
            request->SetHeaderValue(Aws::Http::AWS_TRAILER_HEADER, checksumHeaderValue);
            request->SetTransferEncoding(Aws::Http::CHUNKED_VALUE);
            
            if (!request->HasContentEncoding()) {
                request->SetContentEncoding(Aws::Http::AWS_CHUNKED_VALUE);
            } else {
                Aws::String currentEncoding = request->GetContentEncoding();
                if (currentEncoding.find(Aws::Http::AWS_CHUNKED_VALUE) == Aws::String::npos) {
                    request->SetContentEncoding(Aws::String{Aws::Http::AWS_CHUNKED_VALUE} + "," + currentEncoding);
                }
            }

            if (request->HasHeader(Aws::Http::CONTENT_LENGTH_HEADER)) {
                request->SetHeaderValue(Aws::Http::DECODED_CONTENT_LENGTH_HEADER, request->GetHeaderValue(Aws::Http::CONTENT_LENGTH_HEADER));
                request->DeleteHeader(Aws::Http::CONTENT_LENGTH_HEADER);
            }
        }

        auto chunkedBody = Aws::MakeShared<AwsChunkedIOStream>(
            ALLOCATION_TAG, request.get(), originalBody);

        request->AddContentBody(chunkedBody);
        return request;
    }

    ModifyResponseOutcome ModifyBeforeDeserialization(smithy::interceptor::InterceptorContext& context) override {
        return context.GetTransmitResponse();
    }

private:
    bool ShouldApplyChunking(const std::shared_ptr<Aws::Http::HttpRequest>& request) const {
        // Use configuration setting to determine chunking behavior
        if (m_httpClientChunkedMode != Aws::Client::HttpClientChunkedMode::DEFAULT) {
            return false;
        }
        
        if (!request || !request->GetContentBody()) {
            return false;
        }
        
        // Check if request has checksum requirements
        const auto& hashPair = request->GetRequestHash();
        return hashPair.second != nullptr;
    }

    Aws::Client::HttpClientChunkedMode m_httpClientChunkedMode;
};

} // namespace features
} // namespace client
} // namespace smithy