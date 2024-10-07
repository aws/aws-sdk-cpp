/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <smithy/interceptor/Interceptor.h>

#include <aws/core/utils/crypto/PrecalculatedHash.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <aws/core/utils/crypto/Sha1.h>
#include <aws/core/utils/crypto/Sha256.h>
#include <aws/core/utils/HashingUtils.h>

namespace smithy
{
    namespace interceptor
    {
        static const char* CHECKSUM_INTERCEPTOR_LOG_TAG = "ChecksumInterceptor";

        class ChecksumInterceptor final : public Interceptor
        {
        public:

            ChecksumInterceptor() = default;
            ChecksumInterceptor(const ChecksumInterceptor& other) = delete;
            ChecksumInterceptor(ChecksumInterceptor&& other) noexcept = default;
            ChecksumInterceptor& operator=(const ChecksumInterceptor& other) = delete;
            ChecksumInterceptor& operator=(ChecksumInterceptor&& other) noexcept = default;
            ~ChecksumInterceptor() override = default;

            ModifyRequestOutcome ModifyBeforeSigning(InterceptorContext& context) override
            {
                const auto& httpRequest = context.GetTransmitRequest();
                const auto& modeledRequest = context.GetModeledRequest();
                if (httpRequest == nullptr)
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{Aws::Client::CoreErrors::VALIDATION,
                        "ValidationErrorException",
                        "Checksum request validation missing request",
                        false};
                }
                const auto serviceSpecificParams = modeledRequest.GetServiceSpecificParameters();
                // Request checksums
                Aws::String checksumAlgorithmName = Aws::Utils::StringUtils::ToLower(modeledRequest.GetChecksumAlgorithmName().c_str());
                if (serviceSpecificParams) {
                    auto requestChecksumOverride = serviceSpecificParams->parameterMap.find("overrideChecksum");
                    if (requestChecksumOverride != serviceSpecificParams->parameterMap.end()) {
                        checksumAlgorithmName = requestChecksumOverride->second;
                    }
                }

                bool shouldSkipChecksum = serviceSpecificParams &&
                                          serviceSpecificParams->parameterMap.find("overrideChecksumDisable") !=
                                          serviceSpecificParams->parameterMap.end();

                //Check if user has provided the checksum algorithm
                if (!checksumAlgorithmName.empty() && !shouldSkipChecksum)
                {
                    // Check if user has provided a checksum value for the specified algorithm
                    const Aws::String checksumType = "x-amz-checksum-" + checksumAlgorithmName;
                    const Aws::Http::HeaderValueCollection &headers = httpRequest->GetHeaders();
                    const auto checksumHeader = headers.find(checksumType);
                    bool checksumValueAndAlgorithmProvided = checksumHeader != headers.end();

                    // For non-streaming payload, the resolved checksum location is always header.
                    // For streaming payload, the resolved checksum location depends on whether it is an unsigned payload, we let AwsAuthSigner decide it.
                    if (modeledRequest.IsStreaming() && checksumValueAndAlgorithmProvided)
                    {
                        const auto hash = Aws::MakeShared<Aws::Utils::Crypto::PrecalculatedHash>(CHECKSUM_INTERCEPTOR_LOG_TAG, checksumHeader->second);
                        httpRequest->SetRequestHash(checksumAlgorithmName,hash);
                    }
                    else if (checksumValueAndAlgorithmProvided){
                        httpRequest->SetHeaderValue(checksumType, checksumHeader->second);
                    }
                    else if (checksumAlgorithmName == "crc32")
                    {
                        if (modeledRequest.IsStreaming())
                        {
                            httpRequest->SetRequestHash(checksumAlgorithmName, Aws::MakeShared<Aws::Utils::Crypto::CRC32>(CHECKSUM_INTERCEPTOR_LOG_TAG));
                        }
                        else
                        {
                            const auto body = modeledRequest.GetBody()? modeledRequest.GetBody() : Aws::MakeShared<Aws::StringStream>(CHECKSUM_INTERCEPTOR_LOG_TAG, "");
                            httpRequest->SetHeaderValue(checksumType, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateCRC32(*body)));
                        }
                    }
                    else if (checksumAlgorithmName == "crc32c")
                    {
                        if (modeledRequest.IsStreaming())
                        {
                            httpRequest->SetRequestHash(checksumAlgorithmName, Aws::MakeShared<Aws::Utils::Crypto::CRC32C>(CHECKSUM_INTERCEPTOR_LOG_TAG));
                        }
                        else
                        {
                            const auto body = modeledRequest.GetBody()? modeledRequest.GetBody() : Aws::MakeShared<Aws::StringStream>(CHECKSUM_INTERCEPTOR_LOG_TAG, "");
                            httpRequest->SetHeaderValue(checksumType, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateCRC32C(*body)));
                        }
                    }
                    else if (checksumAlgorithmName == "sha256")
                    {
                        if (modeledRequest.IsStreaming())
                        {
                            httpRequest->SetRequestHash(checksumAlgorithmName, Aws::MakeShared<Aws::Utils::Crypto::Sha256>(CHECKSUM_INTERCEPTOR_LOG_TAG));
                        }
                        else
                        {
                            const auto body = modeledRequest.GetBody()? modeledRequest.GetBody() : Aws::MakeShared<Aws::StringStream>(CHECKSUM_INTERCEPTOR_LOG_TAG, "");
                            httpRequest->SetHeaderValue(checksumType, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateSHA256(*body)));
                        }
                    }
                    else if (checksumAlgorithmName == "sha1")
                    {
                        if (modeledRequest.IsStreaming())
                        {
                            httpRequest->SetRequestHash(checksumAlgorithmName, Aws::MakeShared<Aws::Utils::Crypto::Sha1>(CHECKSUM_INTERCEPTOR_LOG_TAG));
                        }
                        else
                        {
                            const auto body = modeledRequest.GetBody()? modeledRequest.GetBody() : Aws::MakeShared<Aws::StringStream>(CHECKSUM_INTERCEPTOR_LOG_TAG, "");
                            httpRequest->SetHeaderValue(checksumType, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateSHA1(*body)));
                        }
                    }
                    else if (checksumAlgorithmName == "md5" && headers.find(Aws::Http::CONTENT_MD5_HEADER) == headers.end())
                    {
                        const auto body = modeledRequest.GetBody()? modeledRequest.GetBody() : Aws::MakeShared<Aws::StringStream>(CHECKSUM_INTERCEPTOR_LOG_TAG, "");
                        httpRequest->SetHeaderValue(Aws::Http::CONTENT_MD5_HEADER, Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(*body)));
                    }
                    else if (headers.find(Aws::Http::CONTENT_MD5_HEADER) == headers.end())
                    {
                        AWS_LOGSTREAM_WARN(CHECKSUM_INTERCEPTOR_LOG_TAG, "Checksum algorithm: " << checksumAlgorithmName << " is not supported by SDK.");
                    }
                }

                // Response checksums
                if (modeledRequest.ShouldValidateResponseChecksum())
                {
                    for (const Aws::String& responseChecksumAlgorithmName : modeledRequest.GetResponseChecksumAlgorithmNames())
                    {
                        const auto lowered = Aws::Utils::StringUtils::ToLower(responseChecksumAlgorithmName.c_str());

                        if (lowered == "crc32c")
                        {
                            std::shared_ptr<Aws::Utils::Crypto::CRC32C> crc32c = Aws::MakeShared<Aws::Utils::Crypto::CRC32C>(CHECKSUM_INTERCEPTOR_LOG_TAG);
                            httpRequest->AddResponseValidationHash("crc32c", crc32c);
                        }
                        else if (lowered == "crc32")
                        {
                            std::shared_ptr<Aws::Utils::Crypto::CRC32> crc32 = Aws::MakeShared<Aws::Utils::Crypto::CRC32>(CHECKSUM_INTERCEPTOR_LOG_TAG);
                            httpRequest->AddResponseValidationHash("crc32", crc32);
                        }
                        else if (lowered == "sha1")
                        {
                            std::shared_ptr<Aws::Utils::Crypto::Sha1> sha1 = Aws::MakeShared<Aws::Utils::Crypto::Sha1>(CHECKSUM_INTERCEPTOR_LOG_TAG);
                            httpRequest->AddResponseValidationHash("sha1", sha1);
                        }
                        else if (lowered == "sha256")
                        {
                            std::shared_ptr<Aws::Utils::Crypto::Sha256> sha256 = Aws::MakeShared<Aws::Utils::Crypto::Sha256>(CHECKSUM_INTERCEPTOR_LOG_TAG);
                            httpRequest->AddResponseValidationHash("sha256", sha256);
                        }
                        else
                        {
                            AWS_LOGSTREAM_WARN(CHECKSUM_INTERCEPTOR_LOG_TAG, "Checksum algorithm: " << lowered << " is not supported in validating response body yet.");
                        }
                    }
                }
                return context.GetTransmitRequest();
            }

            ModifyResponseOutcome ModifyBeforeDeserialization(InterceptorContext& context) override
            {
                const auto& request = context.GetModeledRequest();
                const auto transmitRequest = context.GetTransmitRequest();
                const auto transmitResponse = context.GetTransmitResponse();
                if (transmitRequest == nullptr || transmitResponse == nullptr)
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{Aws::Client::CoreErrors::VALIDATION,
                        "ValidationErrorException",
                        "Checksum response validation missing request or response",
                        false};
                }
                if (request.ShouldValidateResponseChecksum())
                {
                    for (const auto& hashIterator : transmitRequest->GetResponseValidationHashes())
                    {
                        Aws::String checksumHeaderKey = Aws::String("x-amz-checksum-") + hashIterator.first;
                        // TODO: If checksum ends with -#, then skip
                        if (transmitResponse->HasHeader(checksumHeaderKey.c_str()))
                        {
                            Aws::String checksumHeaderValue = transmitResponse->GetHeader(checksumHeaderKey);
                            if (Aws::Utils::HashingUtils::Base64Encode(hashIterator.second->GetHash().GetResult()) != checksumHeaderValue)
                            {
                                Aws::Client::AWSError<Aws::Client::CoreErrors> error(Aws::Client::CoreErrors::VALIDATION, "", "Response checksums mismatch", false/*retryable*/);
                                error.SetResponseHeaders(transmitResponse->GetHeaders());
                                error.SetResponseCode(transmitResponse->GetResponseCode());
                                error.SetRemoteHostIpAddress(transmitResponse->GetOriginatingRequest().GetResolvedRemoteHost());
                                AWS_LOGSTREAM_ERROR(CHECKSUM_INTERCEPTOR_LOG_TAG, error);
                                return {error};
                            }
                            // Validate only a single checksum returned in an HTTP response
                            break;
                        }
                    }
                }
                return transmitResponse;
            }
        };
    }
}
