/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/securityagent/SecurityAgentClient.h>

#include <algorithm>

namespace Aws {
namespace SecurityAgent {

template <typename DerivedClient = SecurityAgentClient>
class SecurityAgentWaiter {
 public:
};
}  // namespace SecurityAgent
}  // namespace Aws
