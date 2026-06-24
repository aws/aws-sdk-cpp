/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/CurrencyMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace CurrencyModeMapper {

static const int REAL_HASH = HashingUtils::HashString("REAL");
static const int TEST_HASH = HashingUtils::HashString("TEST");

CurrencyMode GetCurrencyModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REAL_HASH) {
    return CurrencyMode::REAL;
  } else if (hashCode == TEST_HASH) {
    return CurrencyMode::TEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CurrencyMode>(hashCode);
  }

  return CurrencyMode::NOT_SET;
}

Aws::String GetNameForCurrencyMode(CurrencyMode enumValue) {
  switch (enumValue) {
    case CurrencyMode::NOT_SET:
      return {};
    case CurrencyMode::REAL:
      return "REAL";
    case CurrencyMode::TEST:
      return "TEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CurrencyModeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
