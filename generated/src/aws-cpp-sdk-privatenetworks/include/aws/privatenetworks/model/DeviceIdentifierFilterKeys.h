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
  enum class DeviceIdentifierFilterKeys
  {
    NOT_SET,
    STATUS,
    ORDER,
    TRAFFIC_GROUP
  };

namespace DeviceIdentifierFilterKeysMapper
{
AWS_PRIVATENETWORKS_API DeviceIdentifierFilterKeys GetDeviceIdentifierFilterKeysForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForDeviceIdentifierFilterKeys(DeviceIdentifierFilterKeys value);
} // namespace DeviceIdentifierFilterKeysMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
