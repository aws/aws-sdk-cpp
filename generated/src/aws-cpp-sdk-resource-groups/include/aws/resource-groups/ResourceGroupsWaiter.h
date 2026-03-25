/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/resource-groups/ResourceGroupsClient.h>

#include <algorithm>

namespace Aws {
namespace ResourceGroups {

template <typename DerivedClient = ResourceGroupsClient>
class ResourceGroupsWaiter {
 public:
};
}  // namespace ResourceGroups
}  // namespace Aws
