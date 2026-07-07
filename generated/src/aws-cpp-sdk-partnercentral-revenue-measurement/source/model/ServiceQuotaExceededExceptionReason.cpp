/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/ServiceQuotaExceededExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace ServiceQuotaExceededExceptionReasonMapper {

static const int ATTRIBUTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ATTRIBUTION_LIMIT_EXCEEDED");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TAG_LIMIT_EXCEEDED");

ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ATTRIBUTION_LIMIT_EXCEEDED_HASH) {
    return ServiceQuotaExceededExceptionReason::ATTRIBUTION_LIMIT_EXCEEDED;
  } else if (hashCode == TAG_LIMIT_EXCEEDED_HASH) {
    return ServiceQuotaExceededExceptionReason::TAG_LIMIT_EXCEEDED;
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
    case ServiceQuotaExceededExceptionReason::ATTRIBUTION_LIMIT_EXCEEDED:
      return "ATTRIBUTION_LIMIT_EXCEEDED";
    case ServiceQuotaExceededExceptionReason::TAG_LIMIT_EXCEEDED:
      return "TAG_LIMIT_EXCEEDED";
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
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
