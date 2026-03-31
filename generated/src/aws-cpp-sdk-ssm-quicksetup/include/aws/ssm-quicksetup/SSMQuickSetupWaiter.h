/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ssm-quicksetup/SSMQuickSetupClient.h>

#include <algorithm>

namespace Aws {
namespace SSMQuickSetup {

template <typename DerivedClient = SSMQuickSetupClient>
class SSMQuickSetupWaiter {
 public:
};
}  // namespace SSMQuickSetup
}  // namespace Aws
