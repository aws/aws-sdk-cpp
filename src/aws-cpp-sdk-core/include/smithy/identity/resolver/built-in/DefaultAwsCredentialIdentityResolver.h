/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/resolver/AwsCredentialIdentityResolver.h>

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>

namespace smithy {
    /**
     * A smithy SigV4 AWS Credentials resolver wrapper on top of legacy SDK Credentials provider
     * TODO: refactor into own signer using smithy design
     */
    class DefaultAwsCredentialIdentityResolver : public AwsCredentialIdentityResolver {
    public:
        using SigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;

        DefaultAwsCredentialIdentityResolver() = default;

        ResolveIdentityFutureOutcome getIdentity(const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters) override
        {
            AWS_UNREFERENCED_PARAM(identityProperties);
            AWS_UNREFERENCED_PARAM(additionalParameters);

            auto legacyCreds = legacyCredentialsProvider.GetAWSCredentials();

            auto smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>("DefaultAwsCredentialIdentityResolver",
                                                                     legacyCreds.GetAWSAccessKeyId(), legacyCreds.GetAWSSecretKey(),
                                                                     legacyCreds.GetSessionToken(), legacyCreds.GetExpiration());

            return ResolveIdentityFutureOutcome(std::move(smithyCreds));
        }

        virtual ~DefaultAwsCredentialIdentityResolver() {};
    protected:
        mutable Aws::Auth::DefaultAWSCredentialsProviderChain legacyCredentialsProvider{};
    };
}
