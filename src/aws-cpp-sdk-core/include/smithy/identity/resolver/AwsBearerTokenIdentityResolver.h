/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/resolver/AwsIdentityResolverBase.h>

#include <smithy/identity/identity/AwsBearerTokenIdentity.h>

namespace smithy {
    class AwsBearerTokenIdentityResolver : public IdentityResolverBase<AwsBearerTokenIdentity> {
    public:
        using IdentityT = AwsBearerTokenIdentity;
        virtual ~AwsBearerTokenIdentityResolver() = default;

        ResolveIdentityFutureOutcome getIdentity(const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters) override = 0;
    };
}