/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/FinancialRecordStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace FinancialRecordStatusMapper {

static const int OUTSTANDING_HASH = HashingUtils::HashString("OUTSTANDING");
static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int SETTLED_HASH = HashingUtils::HashString("SETTLED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

FinancialRecordStatus GetFinancialRecordStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OUTSTANDING_HASH) {
    return FinancialRecordStatus::OUTSTANDING;
  } else if (hashCode == PROCESSING_HASH) {
    return FinancialRecordStatus::PROCESSING;
  } else if (hashCode == SETTLED_HASH) {
    return FinancialRecordStatus::SETTLED;
  } else if (hashCode == CANCELED_HASH) {
    return FinancialRecordStatus::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FinancialRecordStatus>(hashCode);
  }

  return FinancialRecordStatus::NOT_SET;
}

Aws::String GetNameForFinancialRecordStatus(FinancialRecordStatus enumValue) {
  switch (enumValue) {
    case FinancialRecordStatus::NOT_SET:
      return {};
    case FinancialRecordStatus::OUTSTANDING:
      return "OUTSTANDING";
    case FinancialRecordStatus::PROCESSING:
      return "PROCESSING";
    case FinancialRecordStatus::SETTLED:
      return "SETTLED";
    case FinancialRecordStatus::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FinancialRecordStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
