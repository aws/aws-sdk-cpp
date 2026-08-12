/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DlpSettingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DlpSettingStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

DlpSettingStatus GetDlpSettingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DlpSettingStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return DlpSettingStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DlpSettingStatus>(hashCode);
  }

  return DlpSettingStatus::NOT_SET;
}

Aws::String GetNameForDlpSettingStatus(DlpSettingStatus enumValue) {
  switch (enumValue) {
    case DlpSettingStatus::NOT_SET:
      return {};
    case DlpSettingStatus::ACTIVE:
      return "ACTIVE";
    case DlpSettingStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DlpSettingStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
