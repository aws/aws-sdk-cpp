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
  enum class ListDevicesSortBy
  {
    NOT_SET,
    DEVICE_ID,
    CREATED_TIME,
    NAME,
    DEVICE_AGGREGATED_STATUS
  };

namespace ListDevicesSortByMapper
{
AWS_PANORAMA_API ListDevicesSortBy GetListDevicesSortByForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForListDevicesSortBy(ListDevicesSortBy value);
} // namespace ListDevicesSortByMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
