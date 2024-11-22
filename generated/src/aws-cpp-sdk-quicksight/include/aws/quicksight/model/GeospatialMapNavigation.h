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
  enum class GeospatialMapNavigation
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace GeospatialMapNavigationMapper
{
AWS_QUICKSIGHT_API GeospatialMapNavigation GetGeospatialMapNavigationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeospatialMapNavigation(GeospatialMapNavigation value);
} // namespace GeospatialMapNavigationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
