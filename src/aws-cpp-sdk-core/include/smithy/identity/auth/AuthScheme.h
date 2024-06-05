/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/resolver/AwsIdentityResolverBase.h>
#include <smithy/identity/signer/AwsSignerBase.h>

namespace smithy {
    template<uint64_t SCHEME_ID_HASH, typename IDENTITY_T>
    class AuthScheme
    {
    public:
        using IdentityT = IDENTITY_T;

        static const uint64_t schemeId;

        virtual ~AuthScheme() = default;

        virtual std::shared_ptr<IdentityResolverBase<IdentityT>> identityResolver() = 0;

        virtual std::shared_ptr<AwsSignerBase<IdentityT>> signer() = 0;
    };
}