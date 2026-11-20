/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/taxsettings/model/NorwayTaxRegistrationNumberType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {
namespace NorwayTaxRegistrationNumberTypeMapper {

static const int TaxRegistrationNumber_HASH = HashingUtils::HashString("TaxRegistrationNumber");
static const int LocalRegistrationNumber_HASH = HashingUtils::HashString("LocalRegistrationNumber");

NorwayTaxRegistrationNumberType GetNorwayTaxRegistrationNumberTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TaxRegistrationNumber_HASH) {
    return NorwayTaxRegistrationNumberType::TaxRegistrationNumber;
  } else if (hashCode == LocalRegistrationNumber_HASH) {
    return NorwayTaxRegistrationNumberType::LocalRegistrationNumber;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NorwayTaxRegistrationNumberType>(hashCode);
  }

  return NorwayTaxRegistrationNumberType::NOT_SET;
}

Aws::String GetNameForNorwayTaxRegistrationNumberType(NorwayTaxRegistrationNumberType enumValue) {
  switch (enumValue) {
    case NorwayTaxRegistrationNumberType::NOT_SET:
      return {};
    case NorwayTaxRegistrationNumberType::TaxRegistrationNumber:
      return "TaxRegistrationNumber";
    case NorwayTaxRegistrationNumberType::LocalRegistrationNumber:
      return "LocalRegistrationNumber";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NorwayTaxRegistrationNumberTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
