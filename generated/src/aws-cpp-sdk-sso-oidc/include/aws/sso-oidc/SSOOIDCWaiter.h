/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sso-oidc/SSOOIDCClient.h>

#include <algorithm>

namespace Aws {
namespace SSOOIDC {

template <typename DerivedClient = SSOOIDCClient>
class SSOOIDCWaiter {
 public:
};
}  // namespace SSOOIDC
}  // namespace Aws
