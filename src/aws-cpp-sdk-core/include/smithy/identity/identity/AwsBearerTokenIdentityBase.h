/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsIdentity.h>

namespace smithy {
    class AwsBearerTokenIdentityBase : public AwsIdentity {
    public:
        virtual Aws::String token() = 0;

        virtual Aws::Crt::Optional<AwsIdentity::DateTime> expiration() override = 0 ;
    };
}