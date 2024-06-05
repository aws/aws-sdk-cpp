/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthOption.h>
#include <smithy/identity/signer/AwsSignerBase.h>

#include <aws/crt/Variant.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace smithy {
    template<typename ServiceAuthSchemeParametersT = Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<Aws::String, bool>>>
    class AuthSchemeResolverBase
    {
    public:
        using ServiceAuthSchemeParameters = ServiceAuthSchemeParametersT;

        virtual ~AuthSchemeResolverBase() = default;
        // AuthScheme Resolver returns a list of AuthOptions for some reason, according to the SRA...
        virtual std::vector<AuthOption> resolveAuthScheme(const ServiceAuthSchemeParameters& identityProperties) = 0;
    };
}