/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ActionConnectorErrorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ActionConnectorErrorTypeMapper {

static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");

ActionConnectorErrorType GetActionConnectorErrorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_FAILURE_HASH) {
    return ActionConnectorErrorType::INTERNAL_FAILURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionConnectorErrorType>(hashCode);
  }

  return ActionConnectorErrorType::NOT_SET;
}

Aws::String GetNameForActionConnectorErrorType(ActionConnectorErrorType enumValue) {
  switch (enumValue) {
    case ActionConnectorErrorType::NOT_SET:
      return {};
    case ActionConnectorErrorType::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionConnectorErrorTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
