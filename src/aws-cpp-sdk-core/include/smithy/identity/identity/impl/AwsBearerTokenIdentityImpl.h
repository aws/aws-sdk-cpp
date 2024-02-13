/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <smithy/identity/identity/AwsBearerTokenIdentity.h>

namespace smithy {
    Aws::String AwsBearerTokenIdentity::token() {
        return m_token;
    }

    Aws::Crt::Optional<AwsIdentity::DateTime> AwsBearerTokenIdentity::expiration() {
        return m_expiration;
    }
}