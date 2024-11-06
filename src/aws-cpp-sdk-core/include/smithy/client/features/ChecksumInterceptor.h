/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <smithy/interceptor/Interceptor.h>

#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/MD5.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <aws/core/utils/crypto/Sha256.h>
#include <aws/core/utils/crypto/Sha1.h>
#include <aws/core/utils/crypto/PrecalculatedHash.h>
#include <aws/core/platform/Environment.h>

#include <iomanip>

namespace smithy
{
    namespace client
    {
        static const char AWS_SMITHY_CLIENT_CHECKSUM[] = "AwsSmithyClientChecksums";

        static const char CHECKSUM_CONTENT_MD5_HEADER[] = "content-md5";

        class ChecksumInterceptor: public smithy::interceptor::Interceptor
        {
        public:
            using HeaderValueCollection = Aws::Http::HeaderValueCollection;
            using HashingUtils = Aws::Utils::HashingUtils;
            using MD5 = Aws::Utils::Crypto::MD5;
            using CRC32 = Aws::Utils::Crypto::CRC32;
            using CRC32C = Aws::Utils::Crypto::CRC32C;
            using Sha256 = Aws::Utils::Crypto::Sha256;
            using Sha1 = Aws::Utils::Crypto::Sha1;
            using PrecalculatedHash = Aws::Utils::Crypto::PrecalculatedHash;

            ~ChecksumInterceptor() override = default;
            ChecksumInterceptor() = default;
            ChecksumInterceptor(const ChecksumInterceptor& other) = delete;
            ChecksumInterceptor(ChecksumInterceptor&& other) noexcept = default;
            ChecksumInterceptor& operator=(const ChecksumInterceptor& other) = delete;
            ChecksumInterceptor& operator=(ChecksumInterceptor&& other) noexcept = default;

            static std::shared_ptr<Aws::IOStream> GetBodyStream(const Aws::AmazonWebServiceRequest& request)
            {
                if (request.GetBody() != nullptr)
                {
                    return request.GetBody();
                }
                // Return an empty string stream for no body
                return Aws::MakeShared<Aws::StringStream>(AWS_SMITHY_CLIENT_CHECKSUM, "");
            }

            ModifyRequestOutcome ModifyBeforeSigning(interceptor::InterceptorContext& context) override
            {
                const auto& httpRequest = context.GetTransmitRequest();
                const auto& request = context.GetModeledRequest();
                if (httpRequest == nullptr)
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{Aws::Client::CoreErrors::VALIDATION,
                        "ValidationErrorException",
                        "Checksum request validation missing request",
                        false};
                }

                // TODO: remove this once overriding checksum and checksum disable are no longer needed
                Aws::String overridden = Aws::Utils::StringUtils::ToLower(request.GetChecksumAlgorithmName().c_str());
                if (request.GetServiceSpecificParameters())
                {
                  auto requestChecksumOverride = request.GetServiceSpecificParameters()->parameterMap.find("overrideChecksum");
                  if (requestChecksumOverride != request.GetServiceSpecificParameters()->parameterMap.end()) {
                    if (request.IsStreaming()) {
                      httpRequest->SetRequestHash(requestChecksumOverride->second,
                                                  Aws::Client::Checksum::HashFactoryForAlgorithmName(requestChecksumOverride->second)());
                    } else {
                      httpRequest->SetHeaderValue("x-amz-checksum-" + requestChecksumOverride->second,
                                                  HashingUtils::Base64Encode(HashingUtils::CalculateCRC32(*(GetBodyStream(request)))));
                    }
                    return httpRequest;
                  }
                }

                bool shouldSkipChecksum = request.GetServiceSpecificParameters() &&
                                          request.GetServiceSpecificParameters()->parameterMap.find("overrideChecksumDisable") !=
                                              request.GetServiceSpecificParameters()->parameterMap.end();

                const auto checksumInfo = request.GetChecksumInfo();
                const HeaderValueCollection& headers = request.GetHeaders();
                // If the request has checksum context and does not have any checksum headers
                // we need to run checksum operations
                if (!request.GetChecksumAlgorithmName().empty() && !shouldSkipChecksum && checksumInfo.has_value() &&
                    checksumInfo.value().GetChecksumHeaders().empty()) {
                  // Default to MD5 if nothing has been set
                  if (checksumInfo.value().GetChecksumAlgorithm() == Aws::Client::Checksum::ChecksumAlgorithm::NOT_SET &&
                      headers.find(CHECKSUM_CONTENT_MD5_HEADER) == headers.end()) {
                    httpRequest->SetHeaderValue(CHECKSUM_CONTENT_MD5_HEADER,
                                                HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*(GetBodyStream(request)))));
                  } else {
                    if (request.IsStreaming()) {
                      httpRequest->SetRequestHash(checksumInfo.value().GetChecksumAlgorithmName(), checksumInfo.value().GetChecksumHash());
                    } else {
                      httpRequest->SetHeaderValue("x-amz-checksum-" + checksumInfo.value().GetChecksumAlgorithmName(),
                                                  HashingUtils::Base64Encode(HashingUtils::CalculateCRC32(*(GetBodyStream(request)))));
                    }
                  }
                }

                // Response checksums
                if (checksumInfo.has_value() &&
                    checksumInfo.value().GetShouldValidateResponse() == Aws::Client::Checksum::ChecksumMode::ENABLED) {
                  const auto responseChecksums = request.GetResponseChecksumAlgorithmNames();
                  std::for_each(
                      responseChecksums.begin(), responseChecksums.end(), [&httpRequest](const Aws::String& checksumName) -> void {
                        httpRequest->AddResponseValidationHash(checksumName, Aws::Client::Checksum::HashFactoryForAlgorithmName(
                                                                                 Aws::Utils::StringUtils::ToLower(checksumName.c_str()))());
                      });
                }
                return httpRequest;
            }

            ModifyResponseOutcome ModifyBeforeDeserialization(interceptor::InterceptorContext& context) override
            {
                const auto httpRequest = context.GetTransmitRequest();
                const auto httpResponse = context.GetTransmitResponse();
                if (httpRequest == nullptr || httpResponse == nullptr)
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{Aws::Client::CoreErrors::VALIDATION,
                        "ValidationErrorException",
                        "Checksum response validation missing request or response",
                        false};
                }
                for (const auto& hashIterator : httpRequest->GetResponseValidationHashes())
                {
                    Aws::String checksumHeaderKey = Aws::String("x-amz-checksum-") + hashIterator.first;
                    // TODO: If checksum ends with -#, then skip
                    if (httpResponse->HasHeader(checksumHeaderKey.c_str()))
                    {
                        const Aws::String& checksumHeaderValue = httpResponse->GetHeader(checksumHeaderKey);
                        if (HashingUtils::Base64Encode(hashIterator.second->GetHash().GetResult()) !=
                            checksumHeaderValue)
                        {
                            auto error = Aws::Client::AWSError<Aws::Client::CoreErrors>{
                                    Aws::Client::CoreErrors::VALIDATION, "",
                                    "Response checksums mismatch",
                                    false/*retryable*/};
                            error.SetResponseHeaders(httpResponse->GetHeaders());
                            error.SetResponseCode(httpResponse->GetResponseCode());
                            error.SetRemoteHostIpAddress(
                            httpResponse->GetOriginatingRequest().GetResolvedRemoteHost());

                            AWS_LOGSTREAM_ERROR(AWS_SMITHY_CLIENT_CHECKSUM, error);
                            return {error};
                        }
                        // Validate only a single checksum returned in an HTTP response
                        break;
                    }
                }
                return httpResponse;
            }
        };
    }
}
