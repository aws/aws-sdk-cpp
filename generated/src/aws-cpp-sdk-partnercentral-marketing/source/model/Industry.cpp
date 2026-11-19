/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/Industry.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace IndustryMapper {

static const int FINANCIAL_SERVICES_HASH = HashingUtils::HashString("FINANCIAL_SERVICES");
static const int HEALTHCARE_HASH = HashingUtils::HashString("HEALTHCARE");
static const int MANUFACTURING_HASH = HashingUtils::HashString("MANUFACTURING");
static const int RETAIL_HASH = HashingUtils::HashString("RETAIL");
static const int MEDIA_ENTERTAINMENT_HASH = HashingUtils::HashString("MEDIA_ENTERTAINMENT");
static const int ENERGY_HASH = HashingUtils::HashString("ENERGY");
static const int EDUCATION_HASH = HashingUtils::HashString("EDUCATION");
static const int GOVERNMENT_HASH = HashingUtils::HashString("GOVERNMENT");
static const int TELECOMMUNICATIONS_HASH = HashingUtils::HashString("TELECOMMUNICATIONS");
static const int AUTOMOTIVE_HASH = HashingUtils::HashString("AUTOMOTIVE");
static const int INSURANCE_HASH = HashingUtils::HashString("INSURANCE");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

Industry GetIndustryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FINANCIAL_SERVICES_HASH) {
    return Industry::FINANCIAL_SERVICES;
  } else if (hashCode == HEALTHCARE_HASH) {
    return Industry::HEALTHCARE;
  } else if (hashCode == MANUFACTURING_HASH) {
    return Industry::MANUFACTURING;
  } else if (hashCode == RETAIL_HASH) {
    return Industry::RETAIL;
  } else if (hashCode == MEDIA_ENTERTAINMENT_HASH) {
    return Industry::MEDIA_ENTERTAINMENT;
  } else if (hashCode == ENERGY_HASH) {
    return Industry::ENERGY;
  } else if (hashCode == EDUCATION_HASH) {
    return Industry::EDUCATION;
  } else if (hashCode == GOVERNMENT_HASH) {
    return Industry::GOVERNMENT;
  } else if (hashCode == TELECOMMUNICATIONS_HASH) {
    return Industry::TELECOMMUNICATIONS;
  } else if (hashCode == AUTOMOTIVE_HASH) {
    return Industry::AUTOMOTIVE;
  } else if (hashCode == INSURANCE_HASH) {
    return Industry::INSURANCE;
  } else if (hashCode == OTHER_HASH) {
    return Industry::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Industry>(hashCode);
  }

  return Industry::NOT_SET;
}

Aws::String GetNameForIndustry(Industry enumValue) {
  switch (enumValue) {
    case Industry::NOT_SET:
      return {};
    case Industry::FINANCIAL_SERVICES:
      return "FINANCIAL_SERVICES";
    case Industry::HEALTHCARE:
      return "HEALTHCARE";
    case Industry::MANUFACTURING:
      return "MANUFACTURING";
    case Industry::RETAIL:
      return "RETAIL";
    case Industry::MEDIA_ENTERTAINMENT:
      return "MEDIA_ENTERTAINMENT";
    case Industry::ENERGY:
      return "ENERGY";
    case Industry::EDUCATION:
      return "EDUCATION";
    case Industry::GOVERNMENT:
      return "GOVERNMENT";
    case Industry::TELECOMMUNICATIONS:
      return "TELECOMMUNICATIONS";
    case Industry::AUTOMOTIVE:
      return "AUTOMOTIVE";
    case Industry::INSURANCE:
      return "INSURANCE";
    case Industry::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IndustryMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
