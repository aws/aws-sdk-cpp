/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class SpaceQuickSightSearchFilterName {
  NOT_SET,
  SPACE_ID,
  SPACE_NAME,
  DIRECT_QUICKSIGHT_OWNER,
  DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
  DIRECT_QUICKSIGHT_SOLE_OWNER,
  CONTRIBUTED_BY,
  CONSUMED_SOURCE_SIZE,
  CREATED_BY
};

namespace SpaceQuickSightSearchFilterNameMapper {
AWS_QUICKSIGHT_API SpaceQuickSightSearchFilterName GetSpaceQuickSightSearchFilterNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSpaceQuickSightSearchFilterName(SpaceQuickSightSearchFilterName value);
}  // namespace SpaceQuickSightSearchFilterNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
