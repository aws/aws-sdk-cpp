/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/FinancialRecordSortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace FinancialRecordSortFieldMapper {

static const int ISSUED_AT_HASH = HashingUtils::HashString("ISSUED_AT");

FinancialRecordSortField GetFinancialRecordSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ISSUED_AT_HASH) {
    return FinancialRecordSortField::ISSUED_AT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FinancialRecordSortField>(hashCode);
  }

  return FinancialRecordSortField::NOT_SET;
}

Aws::String GetNameForFinancialRecordSortField(FinancialRecordSortField enumValue) {
  switch (enumValue) {
    case FinancialRecordSortField::NOT_SET:
      return {};
    case FinancialRecordSortField::ISSUED_AT:
      return "ISSUED_AT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FinancialRecordSortFieldMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
