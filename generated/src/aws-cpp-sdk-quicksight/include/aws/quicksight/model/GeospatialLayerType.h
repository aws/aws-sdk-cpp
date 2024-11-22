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
  enum class GeospatialLayerType
  {
    NOT_SET,
    POINT,
    LINE,
    POLYGON
  };

namespace GeospatialLayerTypeMapper
{
AWS_QUICKSIGHT_API GeospatialLayerType GetGeospatialLayerTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeospatialLayerType(GeospatialLayerType value);
} // namespace GeospatialLayerTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
