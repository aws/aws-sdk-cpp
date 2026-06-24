/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/Currency.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace CurrencyMapper {

static const int USDC_HASH = HashingUtils::HashString("USDC");

Currency GetCurrencyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USDC_HASH) {
    return Currency::USDC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Currency>(hashCode);
  }

  return Currency::NOT_SET;
}

Aws::String GetNameForCurrency(Currency enumValue) {
  switch (enumValue) {
    case Currency::NOT_SET:
      return {};
    case Currency::USDC:
      return "USDC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CurrencyMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
