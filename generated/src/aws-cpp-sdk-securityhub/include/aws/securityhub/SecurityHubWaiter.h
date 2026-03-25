/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/securityhub/SecurityHubClient.h>

#include <algorithm>

namespace Aws {
namespace SecurityHub {

template <typename DerivedClient = SecurityHubClient>
class SecurityHubWaiter {
 public:
};
}  // namespace SecurityHub
}  // namespace Aws
