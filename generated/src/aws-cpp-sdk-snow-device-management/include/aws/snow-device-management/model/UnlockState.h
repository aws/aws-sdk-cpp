/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{
  enum class UnlockState
  {
    NOT_SET,
    UNLOCKED,
    LOCKED,
    UNLOCKING
  };

namespace UnlockStateMapper
{
AWS_SNOWDEVICEMANAGEMENT_API UnlockState GetUnlockStateForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForUnlockState(UnlockState value);
} // namespace UnlockStateMapper
} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
