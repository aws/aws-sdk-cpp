﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class DeviceServiceName
  {
    NOT_SET,
    NFS_ON_DEVICE_SERVICE,
    S3_ON_DEVICE_SERVICE
  };

namespace DeviceServiceNameMapper
{
AWS_SNOWBALL_API DeviceServiceName GetDeviceServiceNameForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForDeviceServiceName(DeviceServiceName value);
} // namespace DeviceServiceNameMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
