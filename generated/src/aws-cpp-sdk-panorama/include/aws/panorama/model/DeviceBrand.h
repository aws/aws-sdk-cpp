﻿/**
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
  enum class DeviceBrand
  {
    NOT_SET,
    AWS_PANORAMA,
    LENOVO
  };

namespace DeviceBrandMapper
{
AWS_PANORAMA_API DeviceBrand GetDeviceBrandForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDeviceBrand(DeviceBrand value);
} // namespace DeviceBrandMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
