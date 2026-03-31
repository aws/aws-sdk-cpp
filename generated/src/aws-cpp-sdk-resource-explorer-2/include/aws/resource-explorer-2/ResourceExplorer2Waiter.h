/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/resource-explorer-2/ResourceExplorer2Client.h>

#include <algorithm>

namespace Aws {
namespace ResourceExplorer2 {

template <typename DerivedClient = ResourceExplorer2Client>
class ResourceExplorer2Waiter {
 public:
};
}  // namespace ResourceExplorer2
}  // namespace Aws
