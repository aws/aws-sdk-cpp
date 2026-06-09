/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/taxsettings/model/PolandTaxRegistrationNumberType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {
namespace PolandTaxRegistrationNumberTypeMapper {

static const int EUTaxRegistrationNumber_HASH = HashingUtils::HashString("EUTaxRegistrationNumber");
static const int LocalTaxRegistrationNumber_HASH = HashingUtils::HashString("LocalTaxRegistrationNumber");
static const int LocalRegistrationNumber_HASH = HashingUtils::HashString("LocalRegistrationNumber");

PolandTaxRegistrationNumberType GetPolandTaxRegistrationNumberTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EUTaxRegistrationNumber_HASH) {
    return PolandTaxRegistrationNumberType::EUTaxRegistrationNumber;
  } else if (hashCode == LocalTaxRegistrationNumber_HASH) {
    return PolandTaxRegistrationNumberType::LocalTaxRegistrationNumber;
  } else if (hashCode == LocalRegistrationNumber_HASH) {
    return PolandTaxRegistrationNumberType::LocalRegistrationNumber;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolandTaxRegistrationNumberType>(hashCode);
  }

  return PolandTaxRegistrationNumberType::NOT_SET;
}

Aws::String GetNameForPolandTaxRegistrationNumberType(PolandTaxRegistrationNumberType enumValue) {
  switch (enumValue) {
    case PolandTaxRegistrationNumberType::NOT_SET:
      return {};
    case PolandTaxRegistrationNumberType::EUTaxRegistrationNumber:
      return "EUTaxRegistrationNumber";
    case PolandTaxRegistrationNumberType::LocalTaxRegistrationNumber:
      return "LocalTaxRegistrationNumber";
    case PolandTaxRegistrationNumberType::LocalRegistrationNumber:
      return "LocalRegistrationNumber";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolandTaxRegistrationNumberTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
