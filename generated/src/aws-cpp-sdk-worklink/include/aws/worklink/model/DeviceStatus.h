/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkLink
{
namespace Model
{
  enum class DeviceStatus
  {
    NOT_SET,
    ACTIVE,
    SIGNED_OUT
  };

namespace DeviceStatusMapper
{
AWS_WORKLINK_API DeviceStatus GetDeviceStatusForName(const Aws::String& name);

AWS_WORKLINK_API Aws::String GetNameForDeviceStatus(DeviceStatus value);
} // namespace DeviceStatusMapper
} // namespace Model
} // namespace WorkLink
} // namespace Aws
