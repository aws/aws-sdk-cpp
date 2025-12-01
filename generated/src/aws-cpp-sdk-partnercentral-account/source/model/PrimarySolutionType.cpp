/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/PrimarySolutionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace PrimarySolutionTypeMapper {

static const int SOFTWARE_PRODUCTS_HASH = HashingUtils::HashString("SOFTWARE_PRODUCTS");
static const int CONSULTING_SERVICES_HASH = HashingUtils::HashString("CONSULTING_SERVICES");
static const int PROFESSIONAL_SERVICES_HASH = HashingUtils::HashString("PROFESSIONAL_SERVICES");
static const int MANAGED_SERVICES_HASH = HashingUtils::HashString("MANAGED_SERVICES");
static const int HARDWARE_PRODUCTS_HASH = HashingUtils::HashString("HARDWARE_PRODUCTS");
static const int COMMUNICATION_SERVICES_HASH = HashingUtils::HashString("COMMUNICATION_SERVICES");
static const int VALUE_ADDED_RESALE_AWS_SERVICES_HASH = HashingUtils::HashString("VALUE_ADDED_RESALE_AWS_SERVICES");
static const int TRAINING_SERVICES_HASH = HashingUtils::HashString("TRAINING_SERVICES");

PrimarySolutionType GetPrimarySolutionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOFTWARE_PRODUCTS_HASH) {
    return PrimarySolutionType::SOFTWARE_PRODUCTS;
  } else if (hashCode == CONSULTING_SERVICES_HASH) {
    return PrimarySolutionType::CONSULTING_SERVICES;
  } else if (hashCode == PROFESSIONAL_SERVICES_HASH) {
    return PrimarySolutionType::PROFESSIONAL_SERVICES;
  } else if (hashCode == MANAGED_SERVICES_HASH) {
    return PrimarySolutionType::MANAGED_SERVICES;
  } else if (hashCode == HARDWARE_PRODUCTS_HASH) {
    return PrimarySolutionType::HARDWARE_PRODUCTS;
  } else if (hashCode == COMMUNICATION_SERVICES_HASH) {
    return PrimarySolutionType::COMMUNICATION_SERVICES;
  } else if (hashCode == VALUE_ADDED_RESALE_AWS_SERVICES_HASH) {
    return PrimarySolutionType::VALUE_ADDED_RESALE_AWS_SERVICES;
  } else if (hashCode == TRAINING_SERVICES_HASH) {
    return PrimarySolutionType::TRAINING_SERVICES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrimarySolutionType>(hashCode);
  }

  return PrimarySolutionType::NOT_SET;
}

Aws::String GetNameForPrimarySolutionType(PrimarySolutionType enumValue) {
  switch (enumValue) {
    case PrimarySolutionType::NOT_SET:
      return {};
    case PrimarySolutionType::SOFTWARE_PRODUCTS:
      return "SOFTWARE_PRODUCTS";
    case PrimarySolutionType::CONSULTING_SERVICES:
      return "CONSULTING_SERVICES";
    case PrimarySolutionType::PROFESSIONAL_SERVICES:
      return "PROFESSIONAL_SERVICES";
    case PrimarySolutionType::MANAGED_SERVICES:
      return "MANAGED_SERVICES";
    case PrimarySolutionType::HARDWARE_PRODUCTS:
      return "HARDWARE_PRODUCTS";
    case PrimarySolutionType::COMMUNICATION_SERVICES:
      return "COMMUNICATION_SERVICES";
    case PrimarySolutionType::VALUE_ADDED_RESALE_AWS_SERVICES:
      return "VALUE_ADDED_RESALE_AWS_SERVICES";
    case PrimarySolutionType::TRAINING_SERVICES:
      return "TRAINING_SERVICES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrimarySolutionTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
