/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int CANNOT_PARSE_HASH = HashingUtils::HashString("CANNOT_PARSE");
static const int FIELD_VALIDATION_FAILED_HASH = HashingUtils::HashString("FIELD_VALIDATION_FAILED");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("INVALID_PAGINATION_TOKEN");
static const int UNSUPPORTED_ACTION_HASH = HashingUtils::HashString("UNSUPPORTED_ACTION");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CANNOT_PARSE_HASH) {
    return ValidationExceptionReason::CANNOT_PARSE;
  } else if (hashCode == FIELD_VALIDATION_FAILED_HASH) {
    return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
  } else if (hashCode == INVALID_PAGINATION_TOKEN_HASH) {
    return ValidationExceptionReason::INVALID_PAGINATION_TOKEN;
  } else if (hashCode == UNSUPPORTED_ACTION_HASH) {
    return ValidationExceptionReason::UNSUPPORTED_ACTION;
  } else if (hashCode == OTHER_HASH) {
    return ValidationExceptionReason::OTHER;
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
    case ValidationExceptionReason::CANNOT_PARSE:
      return "CANNOT_PARSE";
    case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
      return "FIELD_VALIDATION_FAILED";
    case ValidationExceptionReason::INVALID_PAGINATION_TOKEN:
      return "INVALID_PAGINATION_TOKEN";
    case ValidationExceptionReason::UNSUPPORTED_ACTION:
      return "UNSUPPORTED_ACTION";
    case ValidationExceptionReason::OTHER:
      return "OTHER";
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
}  // namespace Payments
}  // namespace Aws
