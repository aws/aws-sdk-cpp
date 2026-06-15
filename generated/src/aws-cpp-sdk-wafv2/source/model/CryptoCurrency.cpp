/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/CryptoCurrency.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace CryptoCurrencyMapper {

static const int USDC_HASH = HashingUtils::HashString("USDC");

CryptoCurrency GetCryptoCurrencyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USDC_HASH) {
    return CryptoCurrency::USDC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CryptoCurrency>(hashCode);
  }

  return CryptoCurrency::NOT_SET;
}

Aws::String GetNameForCryptoCurrency(CryptoCurrency enumValue) {
  switch (enumValue) {
    case CryptoCurrency::NOT_SET:
      return {};
    case CryptoCurrency::USDC:
      return "USDC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CryptoCurrencyMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
