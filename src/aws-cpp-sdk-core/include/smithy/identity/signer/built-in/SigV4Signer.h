/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/signer/AwsSignerBase.h>
#include <smithy/identity/identity/AwsCredentialIdentityBase.h>

#include <aws/core/auth/signer/AWSAuthV4Signer.h>

#include <aws/core/auth/AWSCredentials.h>
#include <smithy/identity/signer/built-in/SignerProperties.h>
#include <smithy/identity/auth/AuthSchemeResolverBase.h>

namespace smithy {
    /**
     * A smithy SigV4 signer wrapper on top of legacy SDK SigV4 signer
     * TODO: refactor into own signer using smithy design
     */
    class AwsSigV4Signer : public AwsSignerBase<AwsCredentialIdentityBase> {

    public:
        using SigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;
        explicit AwsSigV4Signer(const Aws::String& serviceName, const Aws::String& region)
            : m_serviceName(serviceName),
              m_region(region),
              legacySigner(nullptr, serviceName.c_str(), region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Always)
        {
        }
        /*
            For legacy constructors, this is needed
        */
        explicit AwsSigV4Signer(const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy, bool urlEscapePath)
            : m_serviceName(serviceName),
              m_region(region),
              legacySigner(nullptr, serviceName.c_str(), region, policy, urlEscapePath)
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties) override
        {
            const auto legacyCreds = [&identity]() -> Aws::Auth::AWSCredentials {
                if(identity.sessionToken().has_value() && identity.expiration().has_value())
                {
                    return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken(), *identity.expiration()};
                }
                if(identity.sessionToken().has_value())
                {
                    return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken()};
                }
                return {identity.accessKeyId(), identity.secretAccessKey()};
            }();

            auto signPayloadIt = properties.find("SignPayload");
            bool signPayload = signPayloadIt != properties.end() ? signPayloadIt->second.get<Aws::String>() == "true" : false;

            auto signerRegionOverrideIt = properties.find(smithy::SIGNER_REGION_PROPERTY);
            auto region = signerRegionOverrideIt != properties.end() ? signerRegionOverrideIt->second.get<Aws::String>().c_str() : m_region.c_str();

            auto signerServiceNameOverrideIt = properties.find(smithy::SIGNER_SERVICE_NAME);
            auto svcName = signerServiceNameOverrideIt != properties.end() ? signerServiceNameOverrideIt->second.get<Aws::String>().c_str() : m_serviceName.c_str();


            assert(httpRequest);
            bool success = legacySigner.SignRequestWithCreds(*httpRequest, legacyCreds, region, svcName, signPayload);
            if (success)
            {
                return SigningFutureOutcome(std::move(httpRequest));
            }
            return SigningError(Aws::Client::CoreErrors::MEMORY_ALLOCATION, "", "Failed to sign the request with sigv4", false);
        }

        SigningFutureOutcome presign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds) override
        {
            AWS_UNREFERENCED_PARAM(properties);
            const auto legacyCreds = [&identity]() -> Aws::Auth::AWSCredentials {
                if(identity.sessionToken().has_value() && identity.expiration().has_value())
                {
                    return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken(), *identity.expiration()};
                }
                if(identity.sessionToken().has_value())
                {
                    return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken()};
                }
                return {identity.accessKeyId(), identity.secretAccessKey()};
            }();
            auto result = legacySigner.PresignRequest(*httpRequest, legacyCreds, region.empty() ? nullptr : region.c_str(), serviceName.empty() ? nullptr : serviceName.c_str(), expirationTimeInSeconds);

            return (result ? SigningFutureOutcome(std::move(httpRequest)) :
                            SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "presign failed",
                                          false /*retryable*/));
        }

        virtual ~AwsSigV4Signer() {};
    protected:

        // strictly for backward compatibility
        explicit AwsSigV4Signer(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider> &credentialsProvider, const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy,
        bool urlEscapePath, Aws::Auth::AWSSigningAlgorithm signingAlgorithm )
            : m_serviceName(serviceName),
              m_region(region),
              legacySigner(credentialsProvider, serviceName.c_str(), region, policy, urlEscapePath, signingAlgorithm)
        {
        }

        const Aws::Client::AWSAuthV4Signer& getLegacySigner() const {
            return legacySigner;
        }

        Aws::String m_serviceName;
        Aws::String m_region;
        Aws::Client::AWSAuthV4Signer legacySigner;
    };
}
