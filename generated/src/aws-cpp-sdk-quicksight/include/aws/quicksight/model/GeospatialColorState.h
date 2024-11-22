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
  enum class GeospatialColorState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace GeospatialColorStateMapper
{
AWS_QUICKSIGHT_API GeospatialColorState GetGeospatialColorStateForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeospatialColorState(GeospatialColorState value);
} // namespace GeospatialColorStateMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
