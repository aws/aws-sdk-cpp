/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsCredentialIdentityBase.h>

namespace smithy {
    class AwsCredentialIdentity : public AwsCredentialIdentityBase {
    public:
        virtual Aws::String accessKeyId() override;
        virtual Aws::String secretAccessKey() override;
        virtual Aws::Crt::Optional<Aws::String> sessionToken() override;

        virtual Aws::Crt::Optional<AwsIdentity::DateTime> expiration() override;

    protected:
        Aws::String m_accessKeyId;
        Aws::String m_secretAccessKey;
        Aws::Crt::Optional<Aws::String> m_sessionToken;
        Aws::Crt::Optional<AwsIdentity::DateTime> m_expiration;
    };
}

#include <smithy/identity/identity/impl/AwsCredentialIdentityImpl.h>