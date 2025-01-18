/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/signer/built-in/SigV4Signer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/UUID.h>
namespace smithy {
static const char *S3_EXPRESS_HEADER = "x-amz-s3session-token";
static const char *S3_EXPRESS_QUERY_PARAM = "X-Amz-S3session-Token";

    class S3ExpressSigner : public AwsSigV4Signer
    {
        explicit S3ExpressSigner(const Aws::String& serviceName, const Aws::String& region)
            : AwsSigV4Signer(serviceName, region)
        {
        }

        explicit S3ExpressSigner(const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy)
            : AwsSigV4Signer(serviceName, region, policy)
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties) override
        {
            const auto requestId = Aws::GetWithDefault(httpRequest->GetServiceSpecificParameters()->parameterMap,
            Aws::String("dedupeId"),
            Aws::String(Aws::Utils::UUID::RandomUUID()));
            if(hasRequestId(requestId)) {
                return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Refusing to sign request more than once",
                                          false /*retryable*/);
            }

            if(!identity.sessionToken().has_value()) {
                return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "No session token present",
                                          false /*retryable*/);
            }
            putRequestId(requestId);
            httpRequest->SetHeaderValue(S3_EXPRESS_HEADER, identity.sessionToken().value());
            auto isSigned = AwsSigV4Signer::sign(httpRequest, identity, properties);
            deleteRequestId(requestId);
            return SigningFutureOutcome(std::move(httpRequest));
        }

        SigningFutureOutcome presign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds) override
        {
            const auto requestId = Aws::GetWithDefault(httpRequest->GetServiceSpecificParameters()->parameterMap,
            Aws::String("dedupeId"),
            Aws::String(Aws::Utils::UUID::RandomUUID()));
            if(hasRequestId(requestId)) {
                return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Refusing to sign request more than once",
                                          false /*retryable*/);
            }
            if(!identity.sessionToken().has_value()) {
                return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "No session token present",
                                          false /*retryable*/);
            }
            putRequestId(requestId);
            httpRequest->AddQueryStringParameter(S3_EXPRESS_QUERY_PARAM, identity.sessionToken().value());
            auto isSigned = AwsSigV4Signer::presign(httpRequest, identity, properties, region, serviceName, expirationTimeInSeconds);
            deleteRequestId(requestId);
            return SigningFutureOutcome(std::move(httpRequest));

        }

        private:
        inline bool hasRequestId(const Aws::String &requestId) const {
            std::lock_guard<std::mutex> lock(m_requestProcessing);
            return m_requestsProcessing.find(requestId) != m_requestsProcessing.end();
        }

        inline void putRequestId(const Aws::String &requestId) const {
            std::lock_guard<std::mutex> lock(m_requestProcessing);
            m_requestsProcessing.insert(requestId);
        }

        inline void deleteRequestId(const Aws::String &requestId) const {
            std::lock_guard<std::mutex> lock(m_requestProcessing);
            m_requestsProcessing.erase(requestId);
        }
        mutable std::set<Aws::String> m_requestsProcessing;
        mutable std::mutex m_requestProcessing;
    };
}
