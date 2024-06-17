/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsIdentity.h>

namespace smithy {
    class AwsCredentialIdentityBase : public AwsIdentity {
    public:
        virtual Aws::String accessKeyId() = 0;
        virtual Aws::String secretAccessKey() = 0;
        virtual Aws::Crt::Optional<Aws::String> sessionToken() = 0;
        virtual Aws::Crt::Optional<AwsIdentity::DateTime> expiration() override = 0 ;
    };
}