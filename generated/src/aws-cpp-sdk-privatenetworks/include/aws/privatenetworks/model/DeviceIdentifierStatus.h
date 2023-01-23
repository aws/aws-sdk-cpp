/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class DeviceIdentifierStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace DeviceIdentifierStatusMapper
{
AWS_PRIVATENETWORKS_API DeviceIdentifierStatus GetDeviceIdentifierStatusForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForDeviceIdentifierStatus(DeviceIdentifierStatus value);
} // namespace DeviceIdentifierStatusMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
