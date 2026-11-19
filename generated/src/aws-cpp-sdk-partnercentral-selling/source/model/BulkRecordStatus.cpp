/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/BulkRecordStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace BulkRecordStatusMapper {

static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

BulkRecordStatus GetBulkRecordStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCEEDED_HASH) {
    return BulkRecordStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return BulkRecordStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkRecordStatus>(hashCode);
  }

  return BulkRecordStatus::NOT_SET;
}

Aws::String GetNameForBulkRecordStatus(BulkRecordStatus enumValue) {
  switch (enumValue) {
    case BulkRecordStatus::NOT_SET:
      return {};
    case BulkRecordStatus::SUCCEEDED:
      return "SUCCEEDED";
    case BulkRecordStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkRecordStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
