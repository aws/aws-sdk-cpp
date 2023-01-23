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
  enum class GeoSpatialDataRole
  {
    NOT_SET,
    COUNTRY,
    STATE,
    COUNTY,
    CITY,
    POSTCODE,
    LONGITUDE,
    LATITUDE
  };

namespace GeoSpatialDataRoleMapper
{
AWS_QUICKSIGHT_API GeoSpatialDataRole GetGeoSpatialDataRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeoSpatialDataRole(GeoSpatialDataRole value);
} // namespace GeoSpatialDataRoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
