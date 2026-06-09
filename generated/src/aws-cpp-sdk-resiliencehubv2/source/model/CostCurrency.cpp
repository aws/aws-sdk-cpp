/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/CostCurrency.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace CostCurrencyMapper {

static const int USD_HASH = HashingUtils::HashString("USD");

CostCurrency GetCostCurrencyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USD_HASH) {
    return CostCurrency::USD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CostCurrency>(hashCode);
  }

  return CostCurrency::NOT_SET;
}

Aws::String GetNameForCostCurrency(CostCurrency enumValue) {
  switch (enumValue) {
    case CostCurrency::NOT_SET:
      return {};
    case CostCurrency::USD:
      return "USD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CostCurrencyMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
