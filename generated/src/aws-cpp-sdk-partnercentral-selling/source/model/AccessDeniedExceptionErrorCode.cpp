/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/AccessDeniedExceptionErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace AccessDeniedExceptionErrorCodeMapper {

static const int INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE_HASH = HashingUtils::HashString("INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE");
static const int SEARCH_OPPORTUNITIES_NOT_ENABLED_HASH = HashingUtils::HashString("SEARCH_OPPORTUNITIES_NOT_ENABLED");
static const int SEARCH_OPPORTUNITIES_DATA_NOT_ROUTED_TO_DDB_HASH = HashingUtils::HashString("SEARCH_OPPORTUNITIES_DATA_NOT_ROUTED_TO_DDB");
static const int OPPORTUNITY_BULK_JOB_NOT_ENABLED_HASH = HashingUtils::HashString("OPPORTUNITY_BULK_JOB_NOT_ENABLED");

AccessDeniedExceptionErrorCode GetAccessDeniedExceptionErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE_HASH) {
    return AccessDeniedExceptionErrorCode::INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE;
  } else if (hashCode == SEARCH_OPPORTUNITIES_NOT_ENABLED_HASH) {
    return AccessDeniedExceptionErrorCode::SEARCH_OPPORTUNITIES_NOT_ENABLED;
  } else if (hashCode == SEARCH_OPPORTUNITIES_DATA_NOT_ROUTED_TO_DDB_HASH) {
    return AccessDeniedExceptionErrorCode::SEARCH_OPPORTUNITIES_DATA_NOT_ROUTED_TO_DDB;
  } else if (hashCode == OPPORTUNITY_BULK_JOB_NOT_ENABLED_HASH) {
    return AccessDeniedExceptionErrorCode::OPPORTUNITY_BULK_JOB_NOT_ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessDeniedExceptionErrorCode>(hashCode);
  }

  return AccessDeniedExceptionErrorCode::NOT_SET;
}

Aws::String GetNameForAccessDeniedExceptionErrorCode(AccessDeniedExceptionErrorCode enumValue) {
  switch (enumValue) {
    case AccessDeniedExceptionErrorCode::NOT_SET:
      return {};
    case AccessDeniedExceptionErrorCode::INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE:
      return "INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE";
    case AccessDeniedExceptionErrorCode::SEARCH_OPPORTUNITIES_NOT_ENABLED:
      return "SEARCH_OPPORTUNITIES_NOT_ENABLED";
    case AccessDeniedExceptionErrorCode::SEARCH_OPPORTUNITIES_DATA_NOT_ROUTED_TO_DDB:
      return "SEARCH_OPPORTUNITIES_DATA_NOT_ROUTED_TO_DDB";
    case AccessDeniedExceptionErrorCode::OPPORTUNITY_BULK_JOB_NOT_ENABLED:
      return "OPPORTUNITY_BULK_JOB_NOT_ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessDeniedExceptionErrorCodeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
