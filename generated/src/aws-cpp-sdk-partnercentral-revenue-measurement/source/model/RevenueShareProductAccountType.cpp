/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueShareProductAccountType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace RevenueShareProductAccountTypeMapper {

static const int DEPLOYMENT_HASH = HashingUtils::HashString("DEPLOYMENT");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");

RevenueShareProductAccountType GetRevenueShareProductAccountTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEPLOYMENT_HASH) {
    return RevenueShareProductAccountType::DEPLOYMENT;
  } else if (hashCode == ORGANIZATION_HASH) {
    return RevenueShareProductAccountType::ORGANIZATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevenueShareProductAccountType>(hashCode);
  }

  return RevenueShareProductAccountType::NOT_SET;
}

Aws::String GetNameForRevenueShareProductAccountType(RevenueShareProductAccountType enumValue) {
  switch (enumValue) {
    case RevenueShareProductAccountType::NOT_SET:
      return {};
    case RevenueShareProductAccountType::DEPLOYMENT:
      return "DEPLOYMENT";
    case RevenueShareProductAccountType::ORGANIZATION:
      return "ORGANIZATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevenueShareProductAccountTypeMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
