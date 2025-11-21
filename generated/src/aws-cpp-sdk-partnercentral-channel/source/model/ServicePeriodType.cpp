/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ServicePeriodType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ServicePeriodTypeMapper {

static const int MINIMUM_NOTICE_PERIOD_HASH = HashingUtils::HashString("MINIMUM_NOTICE_PERIOD");
static const int FIXED_COMMITMENT_PERIOD_HASH = HashingUtils::HashString("FIXED_COMMITMENT_PERIOD");

ServicePeriodType GetServicePeriodTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MINIMUM_NOTICE_PERIOD_HASH) {
    return ServicePeriodType::MINIMUM_NOTICE_PERIOD;
  } else if (hashCode == FIXED_COMMITMENT_PERIOD_HASH) {
    return ServicePeriodType::FIXED_COMMITMENT_PERIOD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServicePeriodType>(hashCode);
  }

  return ServicePeriodType::NOT_SET;
}

Aws::String GetNameForServicePeriodType(ServicePeriodType enumValue) {
  switch (enumValue) {
    case ServicePeriodType::NOT_SET:
      return {};
    case ServicePeriodType::MINIMUM_NOTICE_PERIOD:
      return "MINIMUM_NOTICE_PERIOD";
    case ServicePeriodType::FIXED_COMMITMENT_PERIOD:
      return "FIXED_COMMITMENT_PERIOD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServicePeriodTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
