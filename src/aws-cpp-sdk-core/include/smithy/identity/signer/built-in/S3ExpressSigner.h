/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/signer/built-in/SigV4Signer.h>
#include <smithy/identity/signer/built-in/SigV4aSigner.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/client/AWSError.h>
namespace smithy {
    static const char *S3_EXPRESS_HEADER = "x-amz-s3session-token";
    static const char *S3_EXPRESS_QUERY_PARAM = "X-Amz-S3session-Token";
    static const char *S3_EXPRESS_SIGNER_NAME = "S3ExpressSigner";

    template <typename T>
    struct IsValidS3ExpressSigner : std::false_type {};

    template <>
    struct IsValidS3ExpressSigner<AwsSigV4Signer> : std::true_type {};

    template <>
    struct IsValidS3ExpressSigner<AwsSigV4aSigner> : std::true_type {};

    //Ensuring S3 Express Signer can use Sigv4 or Sigv4a signing algorithm
    template <typename BASECLASS>
    class S3ExpressSigner : public std::enable_if<IsValidS3ExpressSigner<BASECLASS>::value, BASECLASS>::type
    {
        public:
        using SigningFutureOutcome = typename BASECLASS::SigningFutureOutcome;
        using SigningProperties = typename BASECLASS::SigningProperties;
        using SigningError = typename BASECLASS::SigningError;
        explicit S3ExpressSigner(const Aws::String& serviceName, const Aws::String& region)
            : BASECLASS(serviceName, region)
        {
        }

        explicit S3ExpressSigner(const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy, bool escapeUrl)
            : BASECLASS(serviceName, region, policy, escapeUrl)
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<Aws::Http::HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties) override
        {
            //if legacy signer, ie if signer name not s3express
            auto signerNameOverride = properties.find("signerName");
            //check for region, service name override
            if(signerNameOverride != properties.end() && signerNameOverride->second.template get<Aws::String>() != S3_EXPRESS_SIGNER_NAME)
            {
                return BASECLASS::sign(httpRequest, identity, properties);
            }
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
            auto isSigned = BASECLASS::sign(httpRequest, identity, properties);
            deleteRequestId(requestId);
            return SigningFutureOutcome(std::move(httpRequest));
        }

        SigningFutureOutcome presign(std::shared_ptr<Aws::Http::HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds) override
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
            auto isSigned = BASECLASS::presign(httpRequest, identity, properties, region, serviceName, expirationTimeInSeconds);
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
