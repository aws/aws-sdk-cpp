/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/savingsplans/model/CurrencyCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SavingsPlans {
namespace Model {
namespace CurrencyCodeMapper {

static const int CNY_HASH = HashingUtils::HashString("CNY");
static const int USD_HASH = HashingUtils::HashString("USD");
static const int EUR_HASH = HashingUtils::HashString("EUR");

CurrencyCode GetCurrencyCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CNY_HASH) {
    return CurrencyCode::CNY;
  } else if (hashCode == USD_HASH) {
    return CurrencyCode::USD;
  } else if (hashCode == EUR_HASH) {
    return CurrencyCode::EUR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CurrencyCode>(hashCode);
  }

  return CurrencyCode::NOT_SET;
}

Aws::String GetNameForCurrencyCode(CurrencyCode enumValue) {
  switch (enumValue) {
    case CurrencyCode::NOT_SET:
      return {};
    case CurrencyCode::CNY:
      return "CNY";
    case CurrencyCode::USD:
      return "USD";
    case CurrencyCode::EUR:
      return "EUR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CurrencyCodeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
