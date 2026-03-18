/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientClient.h>

#include <algorithm>

namespace Aws {
namespace WorkSpacesThinClient {

template <typename DerivedClient = WorkSpacesThinClientClient>
class WorkSpacesThinClientWaiter {
 public:
};
}  // namespace WorkSpacesThinClient
}  // namespace Aws
