/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ServiceQuotaExceededExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ServiceQuotaExceededExceptionReasonMapper {

static const int LIMIT_EXCEEDED_NUMBER_OF_EMAIL_HASH = HashingUtils::HashString("LIMIT_EXCEEDED_NUMBER_OF_EMAIL");
static const int LIMIT_EXCEEDED_NUMBER_OF_DOMAIN_HASH = HashingUtils::HashString("LIMIT_EXCEEDED_NUMBER_OF_DOMAIN");

ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LIMIT_EXCEEDED_NUMBER_OF_EMAIL_HASH) {
    return ServiceQuotaExceededExceptionReason::LIMIT_EXCEEDED_NUMBER_OF_EMAIL;
  } else if (hashCode == LIMIT_EXCEEDED_NUMBER_OF_DOMAIN_HASH) {
    return ServiceQuotaExceededExceptionReason::LIMIT_EXCEEDED_NUMBER_OF_DOMAIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceQuotaExceededExceptionReason>(hashCode);
  }

  return ServiceQuotaExceededExceptionReason::NOT_SET;
}

Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason enumValue) {
  switch (enumValue) {
    case ServiceQuotaExceededExceptionReason::NOT_SET:
      return {};
    case ServiceQuotaExceededExceptionReason::LIMIT_EXCEEDED_NUMBER_OF_EMAIL:
      return "LIMIT_EXCEEDED_NUMBER_OF_EMAIL";
    case ServiceQuotaExceededExceptionReason::LIMIT_EXCEEDED_NUMBER_OF_DOMAIN:
      return "LIMIT_EXCEEDED_NUMBER_OF_DOMAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceQuotaExceededExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
