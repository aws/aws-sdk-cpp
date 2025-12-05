/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/signer/AwsSignerBase.h>
#include <smithy/identity/identity/AwsCredentialIdentityBase.h>
#include <aws/core/auth/signer/AWSNullSigner.h>

namespace smithy {
    /**
     * A smithy NoAuth signer wrapper on top of legacy SDK null signer
     */
    class AwsNoAuthSigner : public AwsSignerBase<AwsCredentialIdentityBase> {
    public:
        explicit AwsNoAuthSigner()
            : legacySigner()
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties) override
        {
            AWS_UNREFERENCED_PARAM(identity);
            AWS_UNREFERENCED_PARAM(properties);
            assert(httpRequest);
            bool success = legacySigner.SignRequest(*httpRequest);
            if (success)
            {
                return SigningFutureOutcome(std::move(httpRequest));
            }
            return SigningError(Aws::Client::CoreErrors::MEMORY_ALLOCATION, "", "Failed to sign the request with noauth", false);
        }

        SigningFutureOutcome presign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds) override
        {
            AWS_UNREFERENCED_PARAM(httpRequest);
            AWS_UNREFERENCED_PARAM(identity);
            AWS_UNREFERENCED_PARAM(properties);
            AWS_UNREFERENCED_PARAM(region);
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(expirationTimeInSeconds);
            return SigningFutureOutcome(std::move(httpRequest));
        }

        virtual ~AwsNoAuthSigner() = default;

    protected:
        Aws::Client::AWSNullSigner legacySigner;
    };
}