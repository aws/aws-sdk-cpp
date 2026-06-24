/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/SettlementSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace SettlementSortByMapper {

static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
static const int AMOUNT_HASH = HashingUtils::HashString("AMOUNT");
static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int STATUS_HASH = HashingUtils::HashString("STATUS");

SettlementSortBy GetSettlementSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TIMESTAMP_HASH) {
    return SettlementSortBy::TIMESTAMP;
  } else if (hashCode == AMOUNT_HASH) {
    return SettlementSortBy::AMOUNT;
  } else if (hashCode == NAME_HASH) {
    return SettlementSortBy::NAME;
  } else if (hashCode == STATUS_HASH) {
    return SettlementSortBy::STATUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SettlementSortBy>(hashCode);
  }

  return SettlementSortBy::NOT_SET;
}

Aws::String GetNameForSettlementSortBy(SettlementSortBy enumValue) {
  switch (enumValue) {
    case SettlementSortBy::NOT_SET:
      return {};
    case SettlementSortBy::TIMESTAMP:
      return "TIMESTAMP";
    case SettlementSortBy::AMOUNT:
      return "AMOUNT";
    case SettlementSortBy::NAME:
      return "NAME";
    case SettlementSortBy::STATUS:
      return "STATUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SettlementSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
