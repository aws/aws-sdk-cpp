/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/BalanceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace BalanceTypeMapper {

static const int INVOICES_DUE_HASH = HashingUtils::HashString("INVOICES_DUE");
static const int INVOICES_PAST_DUE_HASH = HashingUtils::HashString("INVOICES_PAST_DUE");
static const int OUTSTANDING_CREDIT_MEMOS_HASH = HashingUtils::HashString("OUTSTANDING_CREDIT_MEMOS");

BalanceType GetBalanceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVOICES_DUE_HASH) {
    return BalanceType::INVOICES_DUE;
  } else if (hashCode == INVOICES_PAST_DUE_HASH) {
    return BalanceType::INVOICES_PAST_DUE;
  } else if (hashCode == OUTSTANDING_CREDIT_MEMOS_HASH) {
    return BalanceType::OUTSTANDING_CREDIT_MEMOS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BalanceType>(hashCode);
  }

  return BalanceType::NOT_SET;
}

Aws::String GetNameForBalanceType(BalanceType enumValue) {
  switch (enumValue) {
    case BalanceType::NOT_SET:
      return {};
    case BalanceType::INVOICES_DUE:
      return "INVOICES_DUE";
    case BalanceType::INVOICES_PAST_DUE:
      return "INVOICES_PAST_DUE";
    case BalanceType::OUTSTANDING_CREDIT_MEMOS:
      return "OUTSTANDING_CREDIT_MEMOS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BalanceTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
