/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/taxsettings/model/UaeTaxRegistrationNumberType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {
namespace UaeTaxRegistrationNumberTypeMapper {

static const int VATTaxRegistrationNumber_HASH = HashingUtils::HashString("VATTaxRegistrationNumber");
static const int LocalTaxRegistrationNumber_HASH = HashingUtils::HashString("LocalTaxRegistrationNumber");

UaeTaxRegistrationNumberType GetUaeTaxRegistrationNumberTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VATTaxRegistrationNumber_HASH) {
    return UaeTaxRegistrationNumberType::VATTaxRegistrationNumber;
  } else if (hashCode == LocalTaxRegistrationNumber_HASH) {
    return UaeTaxRegistrationNumberType::LocalTaxRegistrationNumber;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UaeTaxRegistrationNumberType>(hashCode);
  }

  return UaeTaxRegistrationNumberType::NOT_SET;
}

Aws::String GetNameForUaeTaxRegistrationNumberType(UaeTaxRegistrationNumberType enumValue) {
  switch (enumValue) {
    case UaeTaxRegistrationNumberType::NOT_SET:
      return {};
    case UaeTaxRegistrationNumberType::VATTaxRegistrationNumber:
      return "VATTaxRegistrationNumber";
    case UaeTaxRegistrationNumberType::LocalTaxRegistrationNumber:
      return "LocalTaxRegistrationNumber";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UaeTaxRegistrationNumberTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
