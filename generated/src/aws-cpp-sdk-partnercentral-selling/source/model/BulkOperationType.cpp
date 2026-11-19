/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/BulkOperationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace BulkOperationTypeMapper {

static const int BULK_CREATE_HASH = HashingUtils::HashString("BULK_CREATE");
static const int BULK_UPDATE_HASH = HashingUtils::HashString("BULK_UPDATE");

BulkOperationType GetBulkOperationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BULK_CREATE_HASH) {
    return BulkOperationType::BULK_CREATE;
  } else if (hashCode == BULK_UPDATE_HASH) {
    return BulkOperationType::BULK_UPDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkOperationType>(hashCode);
  }

  return BulkOperationType::NOT_SET;
}

Aws::String GetNameForBulkOperationType(BulkOperationType enumValue) {
  switch (enumValue) {
    case BulkOperationType::NOT_SET:
      return {};
    case BulkOperationType::BULK_CREATE:
      return "BULK_CREATE";
    case BulkOperationType::BULK_UPDATE:
      return "BULK_UPDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkOperationTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
