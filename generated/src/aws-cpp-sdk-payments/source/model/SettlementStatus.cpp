/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/SettlementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace SettlementStatusMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

SettlementStatus GetSettlementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return SettlementStatus::OPEN;
  } else if (hashCode == CLOSED_HASH) {
    return SettlementStatus::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SettlementStatus>(hashCode);
  }

  return SettlementStatus::NOT_SET;
}

Aws::String GetNameForSettlementStatus(SettlementStatus enumValue) {
  switch (enumValue) {
    case SettlementStatus::NOT_SET:
      return {};
    case SettlementStatus::OPEN:
      return "OPEN";
    case SettlementStatus::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SettlementStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
