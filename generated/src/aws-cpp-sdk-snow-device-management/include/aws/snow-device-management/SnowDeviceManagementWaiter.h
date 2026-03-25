/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/snow-device-management/SnowDeviceManagementClient.h>

#include <algorithm>

namespace Aws {
namespace SnowDeviceManagement {

template <typename DerivedClient = SnowDeviceManagementClient>
class SnowDeviceManagementWaiter {
 public:
};
}  // namespace SnowDeviceManagement
}  // namespace Aws
