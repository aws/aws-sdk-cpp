/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <smithy/identity/identity/AwsBearerTokenIdentity.h>

namespace smithy {
inline const Aws::String &AwsBearerTokenIdentity::token() const { return m_token; }

inline Aws::Crt::Optional<AwsIdentity::DateTime>
AwsBearerTokenIdentity::expiration() const
{
    return m_expiration;
}
}