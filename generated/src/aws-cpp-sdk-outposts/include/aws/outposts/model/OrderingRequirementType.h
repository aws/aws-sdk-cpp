/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class OrderingRequirementType {
  NOT_SET,
  OUTPOST_ACTIVE_CHECK_ERROR,
  MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR,
  VALID_ZIP_CODE_CHECK_ERROR,
  RACK_PHYSICAL_PROPERTIES_CHECK_ERROR,
  OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR,
  SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR,
  COUNTRY_CODE_MISMATCH_CHECK_ERROR,
  OUTPOST_GENERATION_MISMATCH_ERROR,
  UNSUPPORTED,
  OUTPOST_ID_MISSING_ON_QUOTE_ERROR,
  ENTERPRISE_SUPPORT_ERROR,
  SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR,
  SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR,
  SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR,
  OUTPOST_STATE_CHANGED_ERROR,
  OUTPOST_NOT_FOUND_ERROR,
  OUTPOST_RENEWAL_REQUIRED_ERROR
};

namespace OrderingRequirementTypeMapper {
AWS_OUTPOSTS_API OrderingRequirementType GetOrderingRequirementTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForOrderingRequirementType(OrderingRequirementType value);
}  // namespace OrderingRequirementTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
