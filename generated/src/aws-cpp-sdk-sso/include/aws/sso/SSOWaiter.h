/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sso/SSOClient.h>

#include <algorithm>

namespace Aws {
namespace SSO {

template <typename DerivedClient = SSOClient>
class SSOWaiter {
 public:
};
}  // namespace SSO
}  // namespace Aws
