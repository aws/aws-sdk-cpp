/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/OrderingRequirementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace OrderingRequirementTypeMapper {

static const int OUTPOST_ACTIVE_CHECK_ERROR_HASH = HashingUtils::HashString("OUTPOST_ACTIVE_CHECK_ERROR");
static const int MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR_HASH = HashingUtils::HashString("MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR");
static const int VALID_ZIP_CODE_CHECK_ERROR_HASH = HashingUtils::HashString("VALID_ZIP_CODE_CHECK_ERROR");
static const int RACK_PHYSICAL_PROPERTIES_CHECK_ERROR_HASH = HashingUtils::HashString("RACK_PHYSICAL_PROPERTIES_CHECK_ERROR");
static const int OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR_HASH = HashingUtils::HashString("OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR");
static const int SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR_HASH = HashingUtils::HashString("SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR");
static const int COUNTRY_CODE_MISMATCH_CHECK_ERROR_HASH = HashingUtils::HashString("COUNTRY_CODE_MISMATCH_CHECK_ERROR");
static const int OUTPOST_GENERATION_MISMATCH_ERROR_HASH = HashingUtils::HashString("OUTPOST_GENERATION_MISMATCH_ERROR");
static const int UNSUPPORTED_HASH = HashingUtils::HashString("UNSUPPORTED");
static const int OUTPOST_ID_MISSING_ON_QUOTE_ERROR_HASH = HashingUtils::HashString("OUTPOST_ID_MISSING_ON_QUOTE_ERROR");
static const int ENTERPRISE_SUPPORT_ERROR_HASH = HashingUtils::HashString("ENTERPRISE_SUPPORT_ERROR");
static const int SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR_HASH = HashingUtils::HashString("SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR");
static const int SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR_HASH =
    HashingUtils::HashString("SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR");
static const int SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR_HASH = HashingUtils::HashString("SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR");
static const int OUTPOST_STATE_CHANGED_ERROR_HASH = HashingUtils::HashString("OUTPOST_STATE_CHANGED_ERROR");
static const int OUTPOST_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("OUTPOST_NOT_FOUND_ERROR");
static const int OUTPOST_RENEWAL_REQUIRED_ERROR_HASH = HashingUtils::HashString("OUTPOST_RENEWAL_REQUIRED_ERROR");

OrderingRequirementType GetOrderingRequirementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OUTPOST_ACTIVE_CHECK_ERROR_HASH) {
    return OrderingRequirementType::OUTPOST_ACTIVE_CHECK_ERROR;
  } else if (hashCode == MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR_HASH) {
    return OrderingRequirementType::MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR;
  } else if (hashCode == VALID_ZIP_CODE_CHECK_ERROR_HASH) {
    return OrderingRequirementType::VALID_ZIP_CODE_CHECK_ERROR;
  } else if (hashCode == RACK_PHYSICAL_PROPERTIES_CHECK_ERROR_HASH) {
    return OrderingRequirementType::RACK_PHYSICAL_PROPERTIES_CHECK_ERROR;
  } else if (hashCode == OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR_HASH) {
    return OrderingRequirementType::OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR;
  } else if (hashCode == SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR_HASH) {
    return OrderingRequirementType::SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR;
  } else if (hashCode == COUNTRY_CODE_MISMATCH_CHECK_ERROR_HASH) {
    return OrderingRequirementType::COUNTRY_CODE_MISMATCH_CHECK_ERROR;
  } else if (hashCode == OUTPOST_GENERATION_MISMATCH_ERROR_HASH) {
    return OrderingRequirementType::OUTPOST_GENERATION_MISMATCH_ERROR;
  } else if (hashCode == UNSUPPORTED_HASH) {
    return OrderingRequirementType::UNSUPPORTED;
  } else if (hashCode == OUTPOST_ID_MISSING_ON_QUOTE_ERROR_HASH) {
    return OrderingRequirementType::OUTPOST_ID_MISSING_ON_QUOTE_ERROR;
  } else if (hashCode == ENTERPRISE_SUPPORT_ERROR_HASH) {
    return OrderingRequirementType::ENTERPRISE_SUPPORT_ERROR;
  } else if (hashCode == SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR_HASH) {
    return OrderingRequirementType::SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR;
  } else if (hashCode == SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR_HASH) {
    return OrderingRequirementType::SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR;
  } else if (hashCode == SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR_HASH) {
    return OrderingRequirementType::SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR;
  } else if (hashCode == OUTPOST_STATE_CHANGED_ERROR_HASH) {
    return OrderingRequirementType::OUTPOST_STATE_CHANGED_ERROR;
  } else if (hashCode == OUTPOST_NOT_FOUND_ERROR_HASH) {
    return OrderingRequirementType::OUTPOST_NOT_FOUND_ERROR;
  } else if (hashCode == OUTPOST_RENEWAL_REQUIRED_ERROR_HASH) {
    return OrderingRequirementType::OUTPOST_RENEWAL_REQUIRED_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrderingRequirementType>(hashCode);
  }

  return OrderingRequirementType::NOT_SET;
}

Aws::String GetNameForOrderingRequirementType(OrderingRequirementType enumValue) {
  switch (enumValue) {
    case OrderingRequirementType::NOT_SET:
      return {};
    case OrderingRequirementType::OUTPOST_ACTIVE_CHECK_ERROR:
      return "OUTPOST_ACTIVE_CHECK_ERROR";
    case OrderingRequirementType::MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR:
      return "MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR";
    case OrderingRequirementType::VALID_ZIP_CODE_CHECK_ERROR:
      return "VALID_ZIP_CODE_CHECK_ERROR";
    case OrderingRequirementType::RACK_PHYSICAL_PROPERTIES_CHECK_ERROR:
      return "RACK_PHYSICAL_PROPERTIES_CHECK_ERROR";
    case OrderingRequirementType::OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR:
      return "OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR";
    case OrderingRequirementType::SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR:
      return "SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR";
    case OrderingRequirementType::COUNTRY_CODE_MISMATCH_CHECK_ERROR:
      return "COUNTRY_CODE_MISMATCH_CHECK_ERROR";
    case OrderingRequirementType::OUTPOST_GENERATION_MISMATCH_ERROR:
      return "OUTPOST_GENERATION_MISMATCH_ERROR";
    case OrderingRequirementType::UNSUPPORTED:
      return "UNSUPPORTED";
    case OrderingRequirementType::OUTPOST_ID_MISSING_ON_QUOTE_ERROR:
      return "OUTPOST_ID_MISSING_ON_QUOTE_ERROR";
    case OrderingRequirementType::ENTERPRISE_SUPPORT_ERROR:
      return "ENTERPRISE_SUPPORT_ERROR";
    case OrderingRequirementType::SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR:
      return "SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR";
    case OrderingRequirementType::SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR:
      return "SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR";
    case OrderingRequirementType::SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR:
      return "SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR";
    case OrderingRequirementType::OUTPOST_STATE_CHANGED_ERROR:
      return "OUTPOST_STATE_CHANGED_ERROR";
    case OrderingRequirementType::OUTPOST_NOT_FOUND_ERROR:
      return "OUTPOST_NOT_FOUND_ERROR";
    case OrderingRequirementType::OUTPOST_RENEWAL_REQUIRED_ERROR:
      return "OUTPOST_RENEWAL_REQUIRED_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrderingRequirementTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
