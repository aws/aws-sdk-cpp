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
enum class DecalPatternType {
  NOT_SET,
  SOLID,
  DIAGONAL_MEDIUM,
  CIRCLE_MEDIUM,
  DIAMOND_GRID_MEDIUM,
  CHECKERBOARD_MEDIUM,
  TRIANGLE_MEDIUM,
  DIAGONAL_OPPOSITE_MEDIUM,
  DIAMOND_MEDIUM,
  DIAGONAL_LARGE,
  CIRCLE_LARGE,
  DIAMOND_GRID_LARGE,
  CHECKERBOARD_LARGE,
  TRIANGLE_LARGE,
  DIAGONAL_OPPOSITE_LARGE,
  DIAMOND_LARGE,
  DIAGONAL_SMALL,
  CIRCLE_SMALL,
  DIAMOND_GRID_SMALL,
  CHECKERBOARD_SMALL,
  TRIANGLE_SMALL,
  DIAGONAL_OPPOSITE_SMALL,
  DIAMOND_SMALL
};

namespace DecalPatternTypeMapper {
AWS_QUICKSIGHT_API DecalPatternType GetDecalPatternTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDecalPatternType(DecalPatternType value);
}  // namespace DecalPatternTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
