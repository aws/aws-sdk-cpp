/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/signer/AwsSignerBase.h>
#include <smithy/identity/identity/AwsCredentialIdentityBase.h>

#include <aws/core/auth/signer/AWSAuthV4Signer.h>

#include <aws/core/auth/AWSCredentials.h>

namespace smithy {
    /**
     * A smithy SigV4 signer wrapper on top of legacy SDK SigV4 signer
     * TODO: refactor into own signer using smithy design
     */
    class AwsSigV4Signer : public AwsSignerBase<AwsCredentialIdentityBase> {
        
    public:
        using SigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;
        explicit AwsSigV4Signer(const SigV4AuthSchemeParameters& parameters)
            :  m_parameters{parameters}, legacySigner(nullptr, parameters.serviceName.c_str(), *parameters.region)
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties) override
        {
            const char ALLOCATION_TAG[] = "AwsSigV4Signer";

            Aws::UniquePtr<Aws::Auth::AWSCredentials> legacyCreds_sp;

            if(identity.sessionToken().has_value() && identity.expiration().has_value())
            {
                legacyCreds_sp = Aws::MakeUnique<Aws::Auth::AWSCredentials>(ALLOCATION_TAG, identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken(), *identity.expiration());
            }
            else if(identity.sessionToken().has_value())
            {
                legacyCreds_sp = Aws::MakeUnique<Aws::Auth::AWSCredentials>(ALLOCATION_TAG, identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken());
            }
            else
            {
                legacyCreds_sp = Aws::MakeUnique<Aws::Auth::AWSCredentials>(ALLOCATION_TAG, identity.accessKeyId(), identity.secretAccessKey());
            }

            
            auto signPayloadIt = properties.find("SignPayload");
            bool signPayload = signPayloadIt != properties.end() ? signPayloadIt->second.get<Aws::String>() == "true" : false;

            assert(httpRequest);
            bool success = legacySigner.SignRequestWithCreds(*httpRequest, *legacyCreds_sp, m_parameters.region->c_str(), m_parameters.serviceName.c_str(), signPayload);
            if (success)
            {
                return SigningFutureOutcome(std::move(httpRequest));
            }
            return SigningError(Aws::Client::CoreErrors::MEMORY_ALLOCATION, "", "Failed to sign the request with sigv4", false);
        }

        virtual ~AwsSigV4Signer() {};
    protected:
        SigV4AuthSchemeParameters m_parameters;
        Aws::Client::AWSAuthV4Signer legacySigner;
    };
}
