/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workspaces-instances/WorkspacesInstancesClient.h>

#include <algorithm>

namespace Aws {
namespace WorkspacesInstances {

template <typename DerivedClient = WorkspacesInstancesClient>
class WorkspacesInstancesWaiter {
 public:
};
}  // namespace WorkspacesInstances
}  // namespace Aws
