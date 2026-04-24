/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/rolesanywhere/RolesAnywhereClient.h>

#include <algorithm>

namespace Aws {
namespace RolesAnywhere {

template <typename DerivedClient = RolesAnywhereClient>
class RolesAnywhereWaiter {
 public:
};
}  // namespace RolesAnywhere
}  // namespace Aws
