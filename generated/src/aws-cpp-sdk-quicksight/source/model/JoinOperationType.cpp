/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/JoinOperationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace JoinOperationTypeMapper {

static const int INNER_HASH = HashingUtils::HashString("INNER");
static const int OUTER_HASH = HashingUtils::HashString("OUTER");
static const int LEFT_HASH = HashingUtils::HashString("LEFT");
static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");

JoinOperationType GetJoinOperationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INNER_HASH) {
    return JoinOperationType::INNER;
  } else if (hashCode == OUTER_HASH) {
    return JoinOperationType::OUTER;
  } else if (hashCode == LEFT_HASH) {
    return JoinOperationType::LEFT;
  } else if (hashCode == RIGHT_HASH) {
    return JoinOperationType::RIGHT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JoinOperationType>(hashCode);
  }

  return JoinOperationType::NOT_SET;
}

Aws::String GetNameForJoinOperationType(JoinOperationType enumValue) {
  switch (enumValue) {
    case JoinOperationType::NOT_SET:
      return {};
    case JoinOperationType::INNER:
      return "INNER";
    case JoinOperationType::OUTER:
      return "OUTER";
    case JoinOperationType::LEFT:
      return "LEFT";
    case JoinOperationType::RIGHT:
      return "RIGHT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JoinOperationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
