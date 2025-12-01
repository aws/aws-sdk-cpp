/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/resolver/AwsCredentialIdentityResolver.h>

#include <aws/core/auth/AWSCredentials.h>

namespace smithy {
    /**
     * A no-auth identity resolver that returns empty credentials for unauthenticated requests
     */
    class NoAuthIdentityResolver : public AwsCredentialIdentityResolver {
    public:
        NoAuthIdentityResolver() = default;
        virtual ~NoAuthIdentityResolver() = default;

        ResolveIdentityFutureOutcome getIdentity(const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters) override
        {
            AWS_UNREFERENCED_PARAM(identityProperties);
            AWS_UNREFERENCED_PARAM(additionalParameters);

            auto smithyCreds = Aws::MakeUnique<AwsCredentialIdentity>("NoAuthIdentityResolver");
            // Return empty identity for no-auth scenarios
            return {std::move(smithyCreds)};
        }
    };
}