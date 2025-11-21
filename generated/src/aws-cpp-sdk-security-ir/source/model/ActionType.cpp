/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/security-ir/model/ActionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {
namespace ActionTypeMapper {

static const int Evidence_HASH = HashingUtils::HashString("Evidence");
static const int Investigation_HASH = HashingUtils::HashString("Investigation");
static const int Summarization_HASH = HashingUtils::HashString("Summarization");

ActionType GetActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Evidence_HASH) {
    return ActionType::Evidence;
  } else if (hashCode == Investigation_HASH) {
    return ActionType::Investigation;
  } else if (hashCode == Summarization_HASH) {
    return ActionType::Summarization;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionType>(hashCode);
  }

  return ActionType::NOT_SET;
}

Aws::String GetNameForActionType(ActionType enumValue) {
  switch (enumValue) {
    case ActionType::NOT_SET:
      return {};
    case ActionType::Evidence:
      return "Evidence";
    case ActionType::Investigation:
      return "Investigation";
    case ActionType::Summarization:
      return "Summarization";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionTypeMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
