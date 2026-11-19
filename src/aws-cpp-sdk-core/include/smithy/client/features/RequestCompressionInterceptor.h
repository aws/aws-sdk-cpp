/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpRequest.h>
#include <smithy/client/features/RequestPayloadCompression.h>
#include <smithy/interceptor/Interceptor.h>

#include <memory>

namespace smithy {
namespace client {
namespace features {

/**
 * Compresses the body of requests whose operation supports compression, as selected by the
 * service's RequestCompressionConfig. A service's configuration adds this interceptor only if
 * its service has operations that support compression. It must run before the checksum and
 * chunking interceptors, so they see the compressed body.
 */
class RequestCompressionInterceptor : public smithy::interceptor::Interceptor {
 public:
  RequestCompressionInterceptor(const Aws::Client::RequestCompressionConfig& compressionConfig,
                                std::shared_ptr<Aws::Http::HttpClient> httpClient)
      : m_compressionConfig(compressionConfig), m_httpClient(std::move(httpClient)) {}

  ModifyRequestOutcome ModifyBeforeSigning(smithy::interceptor::InterceptorContext& context) override {
    const auto& httpRequest = context.GetTransmitRequest();
    const auto& request = context.GetModeledRequest();
    if (!httpRequest || request.IsEventStreamRequest()) {
      return httpRequest;
    }

    const auto algorithm = request.GetSelectedCompressionAlgorithm(m_compressionConfig);
    if (algorithm == Aws::Client::CompressionAlgorithm::NONE) {
      return httpRequest;
    }

    // The client already attached the uncompressed body. Drop the headers computed from it
    // so they are recomputed for the compressed body.
    httpRequest->DeleteHeader(Aws::Http::CONTENT_LENGTH_HEADER);
    if (request.ShouldComputeContentMd5()) {
      httpRequest->DeleteHeader(Aws::Http::CONTENT_MD5_HEADER);
    }
    smithy::client::RequestPayloadCompression::AddCompressedContentBodyToRequest(&request, httpRequest, algorithm, m_httpClient);

    if (algorithm == Aws::Client::CompressionAlgorithm::GZIP) {
      request.AddUserAgentFeature(Aws::Client::UserAgentFeature::GZIP_REQUEST_COMPRESSION);
    }
    return httpRequest;
  }

  ModifyResponseOutcome ModifyBeforeDeserialization(smithy::interceptor::InterceptorContext& context) override {
    return context.GetTransmitResponse();
  }

 private:
  Aws::Client::RequestCompressionConfig m_compressionConfig;
  std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
};

}  // namespace features
}  // namespace client
}  // namespace smithy
