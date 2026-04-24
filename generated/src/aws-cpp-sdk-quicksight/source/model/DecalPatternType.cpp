/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DecalPatternType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DecalPatternTypeMapper {

static const int SOLID_HASH = HashingUtils::HashString("SOLID");
static const int DIAGONAL_MEDIUM_HASH = HashingUtils::HashString("DIAGONAL_MEDIUM");
static const int CIRCLE_MEDIUM_HASH = HashingUtils::HashString("CIRCLE_MEDIUM");
static const int DIAMOND_GRID_MEDIUM_HASH = HashingUtils::HashString("DIAMOND_GRID_MEDIUM");
static const int CHECKERBOARD_MEDIUM_HASH = HashingUtils::HashString("CHECKERBOARD_MEDIUM");
static const int TRIANGLE_MEDIUM_HASH = HashingUtils::HashString("TRIANGLE_MEDIUM");
static const int DIAGONAL_OPPOSITE_MEDIUM_HASH = HashingUtils::HashString("DIAGONAL_OPPOSITE_MEDIUM");
static const int DIAMOND_MEDIUM_HASH = HashingUtils::HashString("DIAMOND_MEDIUM");
static const int DIAGONAL_LARGE_HASH = HashingUtils::HashString("DIAGONAL_LARGE");
static const int CIRCLE_LARGE_HASH = HashingUtils::HashString("CIRCLE_LARGE");
static const int DIAMOND_GRID_LARGE_HASH = HashingUtils::HashString("DIAMOND_GRID_LARGE");
static const int CHECKERBOARD_LARGE_HASH = HashingUtils::HashString("CHECKERBOARD_LARGE");
static const int TRIANGLE_LARGE_HASH = HashingUtils::HashString("TRIANGLE_LARGE");
static const int DIAGONAL_OPPOSITE_LARGE_HASH = HashingUtils::HashString("DIAGONAL_OPPOSITE_LARGE");
static const int DIAMOND_LARGE_HASH = HashingUtils::HashString("DIAMOND_LARGE");
static const int DIAGONAL_SMALL_HASH = HashingUtils::HashString("DIAGONAL_SMALL");
static const int CIRCLE_SMALL_HASH = HashingUtils::HashString("CIRCLE_SMALL");
static const int DIAMOND_GRID_SMALL_HASH = HashingUtils::HashString("DIAMOND_GRID_SMALL");
static const int CHECKERBOARD_SMALL_HASH = HashingUtils::HashString("CHECKERBOARD_SMALL");
static const int TRIANGLE_SMALL_HASH = HashingUtils::HashString("TRIANGLE_SMALL");
static const int DIAGONAL_OPPOSITE_SMALL_HASH = HashingUtils::HashString("DIAGONAL_OPPOSITE_SMALL");
static const int DIAMOND_SMALL_HASH = HashingUtils::HashString("DIAMOND_SMALL");

DecalPatternType GetDecalPatternTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOLID_HASH) {
    return DecalPatternType::SOLID;
  } else if (hashCode == DIAGONAL_MEDIUM_HASH) {
    return DecalPatternType::DIAGONAL_MEDIUM;
  } else if (hashCode == CIRCLE_MEDIUM_HASH) {
    return DecalPatternType::CIRCLE_MEDIUM;
  } else if (hashCode == DIAMOND_GRID_MEDIUM_HASH) {
    return DecalPatternType::DIAMOND_GRID_MEDIUM;
  } else if (hashCode == CHECKERBOARD_MEDIUM_HASH) {
    return DecalPatternType::CHECKERBOARD_MEDIUM;
  } else if (hashCode == TRIANGLE_MEDIUM_HASH) {
    return DecalPatternType::TRIANGLE_MEDIUM;
  } else if (hashCode == DIAGONAL_OPPOSITE_MEDIUM_HASH) {
    return DecalPatternType::DIAGONAL_OPPOSITE_MEDIUM;
  } else if (hashCode == DIAMOND_MEDIUM_HASH) {
    return DecalPatternType::DIAMOND_MEDIUM;
  } else if (hashCode == DIAGONAL_LARGE_HASH) {
    return DecalPatternType::DIAGONAL_LARGE;
  } else if (hashCode == CIRCLE_LARGE_HASH) {
    return DecalPatternType::CIRCLE_LARGE;
  } else if (hashCode == DIAMOND_GRID_LARGE_HASH) {
    return DecalPatternType::DIAMOND_GRID_LARGE;
  } else if (hashCode == CHECKERBOARD_LARGE_HASH) {
    return DecalPatternType::CHECKERBOARD_LARGE;
  } else if (hashCode == TRIANGLE_LARGE_HASH) {
    return DecalPatternType::TRIANGLE_LARGE;
  } else if (hashCode == DIAGONAL_OPPOSITE_LARGE_HASH) {
    return DecalPatternType::DIAGONAL_OPPOSITE_LARGE;
  } else if (hashCode == DIAMOND_LARGE_HASH) {
    return DecalPatternType::DIAMOND_LARGE;
  } else if (hashCode == DIAGONAL_SMALL_HASH) {
    return DecalPatternType::DIAGONAL_SMALL;
  } else if (hashCode == CIRCLE_SMALL_HASH) {
    return DecalPatternType::CIRCLE_SMALL;
  } else if (hashCode == DIAMOND_GRID_SMALL_HASH) {
    return DecalPatternType::DIAMOND_GRID_SMALL;
  } else if (hashCode == CHECKERBOARD_SMALL_HASH) {
    return DecalPatternType::CHECKERBOARD_SMALL;
  } else if (hashCode == TRIANGLE_SMALL_HASH) {
    return DecalPatternType::TRIANGLE_SMALL;
  } else if (hashCode == DIAGONAL_OPPOSITE_SMALL_HASH) {
    return DecalPatternType::DIAGONAL_OPPOSITE_SMALL;
  } else if (hashCode == DIAMOND_SMALL_HASH) {
    return DecalPatternType::DIAMOND_SMALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DecalPatternType>(hashCode);
  }

  return DecalPatternType::NOT_SET;
}

Aws::String GetNameForDecalPatternType(DecalPatternType enumValue) {
  switch (enumValue) {
    case DecalPatternType::NOT_SET:
      return {};
    case DecalPatternType::SOLID:
      return "SOLID";
    case DecalPatternType::DIAGONAL_MEDIUM:
      return "DIAGONAL_MEDIUM";
    case DecalPatternType::CIRCLE_MEDIUM:
      return "CIRCLE_MEDIUM";
    case DecalPatternType::DIAMOND_GRID_MEDIUM:
      return "DIAMOND_GRID_MEDIUM";
    case DecalPatternType::CHECKERBOARD_MEDIUM:
      return "CHECKERBOARD_MEDIUM";
    case DecalPatternType::TRIANGLE_MEDIUM:
      return "TRIANGLE_MEDIUM";
    case DecalPatternType::DIAGONAL_OPPOSITE_MEDIUM:
      return "DIAGONAL_OPPOSITE_MEDIUM";
    case DecalPatternType::DIAMOND_MEDIUM:
      return "DIAMOND_MEDIUM";
    case DecalPatternType::DIAGONAL_LARGE:
      return "DIAGONAL_LARGE";
    case DecalPatternType::CIRCLE_LARGE:
      return "CIRCLE_LARGE";
    case DecalPatternType::DIAMOND_GRID_LARGE:
      return "DIAMOND_GRID_LARGE";
    case DecalPatternType::CHECKERBOARD_LARGE:
      return "CHECKERBOARD_LARGE";
    case DecalPatternType::TRIANGLE_LARGE:
      return "TRIANGLE_LARGE";
    case DecalPatternType::DIAGONAL_OPPOSITE_LARGE:
      return "DIAGONAL_OPPOSITE_LARGE";
    case DecalPatternType::DIAMOND_LARGE:
      return "DIAMOND_LARGE";
    case DecalPatternType::DIAGONAL_SMALL:
      return "DIAGONAL_SMALL";
    case DecalPatternType::CIRCLE_SMALL:
      return "CIRCLE_SMALL";
    case DecalPatternType::DIAMOND_GRID_SMALL:
      return "DIAMOND_GRID_SMALL";
    case DecalPatternType::CHECKERBOARD_SMALL:
      return "CHECKERBOARD_SMALL";
    case DecalPatternType::TRIANGLE_SMALL:
      return "TRIANGLE_SMALL";
    case DecalPatternType::DIAGONAL_OPPOSITE_SMALL:
      return "DIAGONAL_OPPOSITE_SMALL";
    case DecalPatternType::DIAMOND_SMALL:
      return "DIAMOND_SMALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DecalPatternTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
