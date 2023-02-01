/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class DeviceAggregatedStatus
  {
    NOT_SET,
    ERROR_,
    AWAITING_PROVISIONING,
    PENDING,
    FAILED,
    DELETING,
    ONLINE,
    OFFLINE,
    LEASE_EXPIRED,
    UPDATE_NEEDED,
    REBOOTING
  };

namespace DeviceAggregatedStatusMapper
{
AWS_PANORAMA_API DeviceAggregatedStatus GetDeviceAggregatedStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDeviceAggregatedStatus(DeviceAggregatedStatus value);
} // namespace DeviceAggregatedStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
