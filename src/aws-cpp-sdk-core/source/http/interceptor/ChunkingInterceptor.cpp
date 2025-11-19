/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/interceptor/ChunkingInterceptor.h>
#include <aws/core/utils/stream/AwsChunkedStream.h>
#include <smithy/client/common/AwsSmithyClientUtils.h>

namespace Aws {
namespace Http {

class AwsChunkedIOStream : public Aws::IOStream {
public:
    AwsChunkedIOStream(const std::shared_ptr<Aws::IOStream>& originalBody, Aws::Http::HttpRequest* request)
        : Aws::IOStream(&m_streambuf), m_chunkStream(request, originalBody) {}

private:
    class ChunkedStreamBuf : public std::streambuf {
    public:
        ChunkedStreamBuf(Aws::Utils::Stream::AwsChunkedStream<>& chunkStream) : m_chunkStream(chunkStream) {}

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
        Aws::Utils::Stream::AwsChunkedStream<>& m_chunkStream;
        char m_buffer[8192];
    };

    Aws::Utils::Stream::AwsChunkedStream<> m_chunkStream;
    ChunkedStreamBuf m_streambuf{m_chunkStream};
};

ChunkingInterceptor::ModifyRequestOutcome ChunkingInterceptor::ModifyBeforeSigning(
    smithy::interceptor::InterceptorContext& context) {
    auto request = context.GetTransmitRequest();

    if (m_useAwsChunkedEncoding == Aws::Client::UseAwsChunkedEncoding::DISABLE) {
        return request;
    }
    
    if (!ShouldApplyAwsChunking(request)) {
        return request;
    }

    auto originalBody = request->GetContentBody();
    if (!originalBody) {
        return request;
    }

    auto chunkedBody = Aws::MakeShared<AwsChunkedIOStream>(
        "ChunkingInterceptor", originalBody, request.get());

    request->AddContentBody(chunkedBody);
    
    // Set Transfer-Encoding: chunked for aws-chunked requests (only if not already set)
    if (!request->HasTransferEncoding()) {
        request->SetTransferEncoding("chunked");
    }
    
    // Move Content-Length to x-amz-decoded-content-length and remove Content-Length
    if (request->HasHeader("Content-Length")) {
        auto contentLength = request->GetHeaderValue("Content-Length");
        request->SetHeaderValue("x-amz-decoded-content-length", contentLength);
        request->DeleteHeader("Content-Length");
    }
    
    smithy::client::Utils::AppendHeaderValueToRequest(request, CONTENT_ENCODING_HEADER, AWS_CHUNKED_VALUE);

    return request;
}

ChunkingInterceptor::ModifyResponseOutcome ChunkingInterceptor::ModifyBeforeDeserialization(
    smithy::interceptor::InterceptorContext& context) {
    return context.GetTransmitResponse();
}

bool ChunkingInterceptor::ShouldApplyAwsChunking(const std::shared_ptr<Aws::Http::HttpRequest>& request) const {
    if (!request || !request->GetContentBody()) {
        return false;
    }
    const auto& hashPair = request->GetRequestHash();
    return hashPair.second != nullptr;
}

} // namespace Http
} // namespace Aws