/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/socialmessaging/model/MetaFlowCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {
namespace MetaFlowCategoryMapper {

static const int SIGN_UP_HASH = HashingUtils::HashString("SIGN_UP");
static const int SIGN_IN_HASH = HashingUtils::HashString("SIGN_IN");
static const int APPOINTMENT_BOOKING_HASH = HashingUtils::HashString("APPOINTMENT_BOOKING");
static const int LEAD_GENERATION_HASH = HashingUtils::HashString("LEAD_GENERATION");
static const int SHOPPING_HASH = HashingUtils::HashString("SHOPPING");
static const int CONTACT_US_HASH = HashingUtils::HashString("CONTACT_US");
static const int CUSTOMER_SUPPORT_HASH = HashingUtils::HashString("CUSTOMER_SUPPORT");
static const int SURVEY_HASH = HashingUtils::HashString("SURVEY");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

MetaFlowCategory GetMetaFlowCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SIGN_UP_HASH) {
    return MetaFlowCategory::SIGN_UP;
  } else if (hashCode == SIGN_IN_HASH) {
    return MetaFlowCategory::SIGN_IN;
  } else if (hashCode == APPOINTMENT_BOOKING_HASH) {
    return MetaFlowCategory::APPOINTMENT_BOOKING;
  } else if (hashCode == LEAD_GENERATION_HASH) {
    return MetaFlowCategory::LEAD_GENERATION;
  } else if (hashCode == SHOPPING_HASH) {
    return MetaFlowCategory::SHOPPING;
  } else if (hashCode == CONTACT_US_HASH) {
    return MetaFlowCategory::CONTACT_US;
  } else if (hashCode == CUSTOMER_SUPPORT_HASH) {
    return MetaFlowCategory::CUSTOMER_SUPPORT;
  } else if (hashCode == SURVEY_HASH) {
    return MetaFlowCategory::SURVEY;
  } else if (hashCode == OTHER_HASH) {
    return MetaFlowCategory::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetaFlowCategory>(hashCode);
  }

  return MetaFlowCategory::NOT_SET;
}

Aws::String GetNameForMetaFlowCategory(MetaFlowCategory enumValue) {
  switch (enumValue) {
    case MetaFlowCategory::NOT_SET:
      return {};
    case MetaFlowCategory::SIGN_UP:
      return "SIGN_UP";
    case MetaFlowCategory::SIGN_IN:
      return "SIGN_IN";
    case MetaFlowCategory::APPOINTMENT_BOOKING:
      return "APPOINTMENT_BOOKING";
    case MetaFlowCategory::LEAD_GENERATION:
      return "LEAD_GENERATION";
    case MetaFlowCategory::SHOPPING:
      return "SHOPPING";
    case MetaFlowCategory::CONTACT_US:
      return "CONTACT_US";
    case MetaFlowCategory::CUSTOMER_SUPPORT:
      return "CUSTOMER_SUPPORT";
    case MetaFlowCategory::SURVEY:
      return "SURVEY";
    case MetaFlowCategory::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetaFlowCategoryMapper
}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
