/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/stream/AwsChunkedStream.h>
#include <smithy/interceptor/Interceptor.h>
#include <smithy/client/common/AwsSmithyClientUtils.h>

namespace smithy {
namespace client {
namespace features {

namespace {

class AwsChunkedStreamBuf : public std::streambuf {
public:
    AwsChunkedStreamBuf(Aws::Http::HttpRequest* request, const std::shared_ptr<Aws::IOStream>& originalBody)
        : m_chunkStream(request, originalBody) {
        setg(nullptr, nullptr, nullptr);
    }

protected:
    int_type underflow() override {
        if (gptr() < egptr()) {
            return traits_type::to_int_type(*gptr());
        }
        
        size_t bytesRead = m_chunkStream.BufferedRead(m_buffer, sizeof(m_buffer));
        if (bytesRead == 0) {
            return traits_type::eof();
        }
        
        setg(m_buffer, m_buffer, m_buffer + bytesRead);
        return traits_type::to_int_type(*gptr());
    }

    std::streamsize showmanyc() override {
        return egptr() - gptr();
    }

private:
    Aws::Utils::Stream::AwsChunkedStream<> m_chunkStream;
    char m_buffer[8192];
};

} // anonymous namespace

/**
 * Interceptor that handles chunked encoding for streaming requests with checksums.
 * Wraps request body with chunked stream and sets appropriate headers.
 */
class AWS_CORE_API ChunkingInterceptor : public smithy::interceptor::Interceptor {
public:
    ChunkingInterceptor() : m_httpClientChunkedMode(Aws::Client::HttpClientChunkedMode::DEFAULT) {}
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
            Aws::String checksumHeaderValue = Aws::String("x-amz-checksum-") + hashPair.first;
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

        auto chunkedBuf = Aws::MakeUnique<AwsChunkedStreamBuf>(
            "ChunkingInterceptor", request.get(), originalBody);
        auto chunkedBody = std::shared_ptr<Aws::IOStream>(
            new Aws::IOStream(chunkedBuf.release()));

        request->AddContentBody(chunkedBody);
        return request;
    }

    ModifyResponseOutcome ModifyBeforeDeserialization(smithy::interceptor::InterceptorContext& context) override {
        return context.GetTransmitResponse();
    }

private:
    bool ShouldApplyChunking(const std::shared_ptr<Aws::Http::HttpRequest>& request) const {
        if (!request || !request->GetContentBody()) {
            return false;
        }
        
        // Check if request has checksum requirements
        const auto& hashPair = request->GetRequestHash();
        bool hasChecksum = hashPair.second != nullptr;
        
        if (!hasChecksum) {
            return false;
        }
        
        // Use configuration setting to determine chunking behavior
        return m_httpClientChunkedMode == Aws::Client::HttpClientChunkedMode::DEFAULT;
    }

    Aws::Client::HttpClientChunkedMode m_httpClientChunkedMode;
};

} // namespace features
} // namespace client
} // namespace smithy