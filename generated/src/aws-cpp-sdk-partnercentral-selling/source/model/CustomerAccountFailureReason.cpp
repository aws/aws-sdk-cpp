/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/CustomerAccountFailureReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace CustomerAccountFailureReasonMapper {

static const int DUPLICATE_CUSTOMER_MATCH_HASH = HashingUtils::HashString("DUPLICATE_CUSTOMER_MATCH");
static const int PROCESSING_ERROR_HASH = HashingUtils::HashString("PROCESSING_ERROR");

CustomerAccountFailureReason GetCustomerAccountFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DUPLICATE_CUSTOMER_MATCH_HASH) {
    return CustomerAccountFailureReason::DUPLICATE_CUSTOMER_MATCH;
  } else if (hashCode == PROCESSING_ERROR_HASH) {
    return CustomerAccountFailureReason::PROCESSING_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomerAccountFailureReason>(hashCode);
  }

  return CustomerAccountFailureReason::NOT_SET;
}

Aws::String GetNameForCustomerAccountFailureReason(CustomerAccountFailureReason enumValue) {
  switch (enumValue) {
    case CustomerAccountFailureReason::NOT_SET:
      return {};
    case CustomerAccountFailureReason::DUPLICATE_CUSTOMER_MATCH:
      return "DUPLICATE_CUSTOMER_MATCH";
    case CustomerAccountFailureReason::PROCESSING_ERROR:
      return "PROCESSING_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomerAccountFailureReasonMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
