/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class GeoSpatialCountryCode
  {
    NOT_SET,
    US
  };

namespace GeoSpatialCountryCodeMapper
{
AWS_QUICKSIGHT_API GeoSpatialCountryCode GetGeoSpatialCountryCodeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeoSpatialCountryCode(GeoSpatialCountryCode value);
} // namespace GeoSpatialCountryCodeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
