/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/FinancialRecordType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace FinancialRecordTypeMapper {

static const int INVOICE_HASH = HashingUtils::HashString("INVOICE");
static const int CREDIT_MEMO_HASH = HashingUtils::HashString("CREDIT_MEMO");

FinancialRecordType GetFinancialRecordTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVOICE_HASH) {
    return FinancialRecordType::INVOICE;
  } else if (hashCode == CREDIT_MEMO_HASH) {
    return FinancialRecordType::CREDIT_MEMO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FinancialRecordType>(hashCode);
  }

  return FinancialRecordType::NOT_SET;
}

Aws::String GetNameForFinancialRecordType(FinancialRecordType enumValue) {
  switch (enumValue) {
    case FinancialRecordType::NOT_SET:
      return {};
    case FinancialRecordType::INVOICE:
      return "INVOICE";
    case FinancialRecordType::CREDIT_MEMO:
      return "CREDIT_MEMO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FinancialRecordTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
