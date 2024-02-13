/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/resolver/AwsIdentityResolverBase.h>

#include <smithy/identity/identity/AwsCredentialIdentity.h>

namespace smithy {
    class AwsCredentialIdentityResolver : public IdentityResolverBase<AwsCredentialIdentity> {
    public:
        using IdentityT = AwsCredentialIdentity;
        virtual ~AwsCredentialIdentityResolver() = default;

        virtual ResolveIdentityFutureOutcome getIdentity(const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters) = 0;
    };
}