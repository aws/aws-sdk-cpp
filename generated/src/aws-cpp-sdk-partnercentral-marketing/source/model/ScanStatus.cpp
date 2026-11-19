/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/ScanStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace ScanStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int CLEAN_HASH = HashingUtils::HashString("CLEAN");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

ScanStatus GetScanStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ScanStatus::PENDING;
  } else if (hashCode == CLEAN_HASH) {
    return ScanStatus::CLEAN;
  } else if (hashCode == REJECTED_HASH) {
    return ScanStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanStatus>(hashCode);
  }

  return ScanStatus::NOT_SET;
}

Aws::String GetNameForScanStatus(ScanStatus enumValue) {
  switch (enumValue) {
    case ScanStatus::NOT_SET:
      return {};
    case ScanStatus::PENDING:
      return "PENDING";
    case ScanStatus::CLEAN:
      return "CLEAN";
    case ScanStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
