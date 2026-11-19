/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int FIELD_VALIDATION_FAILED_HASH = HashingUtils::HashString("FIELD_VALIDATION_FAILED");
static const int CANNOT_PARSE_HASH = HashingUtils::HashString("CANNOT_PARSE");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int CAMPAIGN_INCOMPLETE_HASH = HashingUtils::HashString("CAMPAIGN_INCOMPLETE");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIELD_VALIDATION_FAILED_HASH) {
    return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
  } else if (hashCode == CANNOT_PARSE_HASH) {
    return ValidationExceptionReason::CANNOT_PARSE;
  } else if (hashCode == OTHER_HASH) {
    return ValidationExceptionReason::OTHER;
  } else if (hashCode == CAMPAIGN_INCOMPLETE_HASH) {
    return ValidationExceptionReason::CAMPAIGN_INCOMPLETE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationExceptionReason>(hashCode);
  }

  return ValidationExceptionReason::NOT_SET;
}

Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue) {
  switch (enumValue) {
    case ValidationExceptionReason::NOT_SET:
      return {};
    case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
      return "FIELD_VALIDATION_FAILED";
    case ValidationExceptionReason::CANNOT_PARSE:
      return "CANNOT_PARSE";
    case ValidationExceptionReason::OTHER:
      return "OTHER";
    case ValidationExceptionReason::CAMPAIGN_INCOMPLETE:
      return "CAMPAIGN_INCOMPLETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
