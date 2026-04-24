/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workspaces/WorkSpacesClient.h>

#include <algorithm>

namespace Aws {
namespace WorkSpaces {

template <typename DerivedClient = WorkSpacesClient>
class WorkSpacesWaiter {
 public:
};
}  // namespace WorkSpaces
}  // namespace Aws
