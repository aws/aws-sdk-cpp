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
        : m_chunkingStream(Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG)),
          m_request(request),
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

        setg(nullptr, nullptr, nullptr);
    }

protected:
    int_type underflow() override {
        if (gptr() && gptr() < egptr()) {
            return traits_type::to_int_type(*gptr());
        }

        // only read and write to chunked stream if the underlying stream
        // is still in a valid state
        if (m_stream->good()) {
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

        // if the underlying stream is empty there is nothing to read
        if ((m_chunkingStream->peek() == EOF || m_chunkingStream->eof()) && !m_chunkingStream->bad()) {
            return traits_type::eof();
        }

        // Read from chunking stream to internal buffer
        m_chunkingStream->read(m_buffer.GetUnderlyingData(), m_buffer.GetLength());
        size_t bytesRead = static_cast<size_t>(m_chunkingStream->gcount());
        if (bytesRead == 0) {
            return traits_type::eof();
        }

        setg(m_buffer.GetUnderlyingData(), m_buffer.GetUnderlyingData(), m_buffer.GetUnderlyingData() + bytesRead);
        return traits_type::to_int_type(*gptr());
    }

private:
    void writeTrailerToUnderlyingStream() {
        Aws::StringStream chunkedTrailerStream;
        chunkedTrailerStream << "0\r\n";
        if (m_request->GetRequestHash().second != nullptr) {
            chunkedTrailerStream << "x-amz-checksum-" << m_request->GetRequestHash().first << ":"
                               << Aws::Utils::HashingUtils::Base64Encode(m_request->GetRequestHash().second->GetHash().GetResult()) << "\r\n";
        }
        chunkedTrailerStream << "\r\n";
        const auto chunkedTrailer = chunkedTrailerStream.str();
        if (m_chunkingStream->eof()) {
            m_chunkingStream->clear();
        }
        *m_chunkingStream << chunkedTrailer;
    }

    void writeChunk(size_t bytesRead) {
        if (m_request->GetRequestHash().second != nullptr) {
            m_request->GetRequestHash().second->Update(reinterpret_cast<unsigned char*>(m_data.GetUnderlyingData()), bytesRead);
        }

        if (bytesRead > 0 && m_chunkingStream && !m_chunkingStream->bad()) {
            if (m_chunkingStream->eof()) {
                m_chunkingStream->clear();
            }
            *m_chunkingStream << Aws::Utils::StringUtils::ToHexString(bytesRead) << "\r\n";
            m_chunkingStream->write(m_data.GetUnderlyingData(), bytesRead);
            *m_chunkingStream << "\r\n";
        }
    }

    std::shared_ptr<Aws::IOStream> m_chunkingStream;
    Aws::Http::HttpRequest* m_request{nullptr};
    std::shared_ptr<Aws::IOStream> m_stream;
    Aws::Utils::Array<char> m_data;
    Aws::Utils::Array<char> m_buffer{DataBufferSize};
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
    explicit ChunkingInterceptor(const Aws::Client::ClientConfiguration& config)
        : m_httpClientChunkedMode(config.httpClientChunkedMode) {}
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