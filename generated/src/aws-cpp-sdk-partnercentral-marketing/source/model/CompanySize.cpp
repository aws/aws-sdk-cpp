/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CompanySize.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CompanySizeMapper {

static const int STARTUP_HASH = HashingUtils::HashString("STARTUP");
static const int SMALL_BUSINESS_HASH = HashingUtils::HashString("SMALL_BUSINESS");
static const int MID_MARKET_HASH = HashingUtils::HashString("MID_MARKET");
static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");
static const int GLOBAL_ENTERPRISE_HASH = HashingUtils::HashString("GLOBAL_ENTERPRISE");

CompanySize GetCompanySizeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTUP_HASH) {
    return CompanySize::STARTUP;
  } else if (hashCode == SMALL_BUSINESS_HASH) {
    return CompanySize::SMALL_BUSINESS;
  } else if (hashCode == MID_MARKET_HASH) {
    return CompanySize::MID_MARKET;
  } else if (hashCode == ENTERPRISE_HASH) {
    return CompanySize::ENTERPRISE;
  } else if (hashCode == GLOBAL_ENTERPRISE_HASH) {
    return CompanySize::GLOBAL_ENTERPRISE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CompanySize>(hashCode);
  }

  return CompanySize::NOT_SET;
}

Aws::String GetNameForCompanySize(CompanySize enumValue) {
  switch (enumValue) {
    case CompanySize::NOT_SET:
      return {};
    case CompanySize::STARTUP:
      return "STARTUP";
    case CompanySize::SMALL_BUSINESS:
      return "SMALL_BUSINESS";
    case CompanySize::MID_MARKET:
      return "MID_MARKET";
    case CompanySize::ENTERPRISE:
      return "ENTERPRISE";
    case CompanySize::GLOBAL_ENTERPRISE:
      return "GLOBAL_ENTERPRISE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CompanySizeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
