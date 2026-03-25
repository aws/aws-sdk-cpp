/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClient.h>

#include <algorithm>

namespace Aws {
namespace ResourceGroupsTaggingAPI {

template <typename DerivedClient = ResourceGroupsTaggingAPIClient>
class ResourceGroupsTaggingAPIWaiter {
 public:
};
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
