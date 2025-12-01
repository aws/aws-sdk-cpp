/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/AccessDeniedExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace AccessDeniedExceptionReasonMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE_HASH = HashingUtils::HashString("INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE");

AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return AccessDeniedExceptionReason::ACCESS_DENIED;
  } else if (hashCode == INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE_HASH) {
    return AccessDeniedExceptionReason::INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessDeniedExceptionReason>(hashCode);
  }

  return AccessDeniedExceptionReason::NOT_SET;
}

Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue) {
  switch (enumValue) {
    case AccessDeniedExceptionReason::NOT_SET:
      return {};
    case AccessDeniedExceptionReason::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case AccessDeniedExceptionReason::INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE:
      return "INCOMPATIBLE_BENEFIT_AWS_PARTNER_STATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
