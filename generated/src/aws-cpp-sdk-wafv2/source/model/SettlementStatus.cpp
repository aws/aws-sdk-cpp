/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/SettlementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace SettlementStatusMapper {

static const int SETTLED_HASH = HashingUtils::HashString("SETTLED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SERVICE_ERROR_HASH = HashingUtils::HashString("SERVICE_ERROR");
static const int SKIPPED_ORIGIN_ERROR_HASH = HashingUtils::HashString("SKIPPED_ORIGIN_ERROR");
static const int DUPLICATE_HASH = HashingUtils::HashString("DUPLICATE");

SettlementStatus GetSettlementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SETTLED_HASH) {
    return SettlementStatus::SETTLED;
  } else if (hashCode == PENDING_HASH) {
    return SettlementStatus::PENDING;
  } else if (hashCode == FAILED_HASH) {
    return SettlementStatus::FAILED;
  } else if (hashCode == SERVICE_ERROR_HASH) {
    return SettlementStatus::SERVICE_ERROR;
  } else if (hashCode == SKIPPED_ORIGIN_ERROR_HASH) {
    return SettlementStatus::SKIPPED_ORIGIN_ERROR;
  } else if (hashCode == DUPLICATE_HASH) {
    return SettlementStatus::DUPLICATE;
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
    case SettlementStatus::SETTLED:
      return "SETTLED";
    case SettlementStatus::PENDING:
      return "PENDING";
    case SettlementStatus::FAILED:
      return "FAILED";
    case SettlementStatus::SERVICE_ERROR:
      return "SERVICE_ERROR";
    case SettlementStatus::SKIPPED_ORIGIN_ERROR:
      return "SKIPPED_ORIGIN_ERROR";
    case SettlementStatus::DUPLICATE:
      return "DUPLICATE";
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
}  // namespace WAFV2
}  // namespace Aws
