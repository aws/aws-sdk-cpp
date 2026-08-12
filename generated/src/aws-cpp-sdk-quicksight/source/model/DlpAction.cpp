/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DlpAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DlpActionMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int WARN_HASH = HashingUtils::HashString("WARN");
static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");

DlpAction GetDlpActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return DlpAction::ALLOW;
  } else if (hashCode == WARN_HASH) {
    return DlpAction::WARN;
  } else if (hashCode == BLOCK_HASH) {
    return DlpAction::BLOCK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DlpAction>(hashCode);
  }

  return DlpAction::NOT_SET;
}

Aws::String GetNameForDlpAction(DlpAction enumValue) {
  switch (enumValue) {
    case DlpAction::NOT_SET:
      return {};
    case DlpAction::ALLOW:
      return "ALLOW";
    case DlpAction::WARN:
      return "WARN";
    case DlpAction::BLOCK:
      return "BLOCK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DlpActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
