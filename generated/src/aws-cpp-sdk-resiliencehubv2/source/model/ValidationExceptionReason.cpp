/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int INVALID_FIELD_VALUE_HASH = HashingUtils::HashString("INVALID_FIELD_VALUE");
static const int DUPLICATE_VALUE_HASH = HashingUtils::HashString("DUPLICATE_VALUE");
static const int MISSING_REQUIRED_FIELD_HASH = HashingUtils::HashString("MISSING_REQUIRED_FIELD");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_FIELD_VALUE_HASH) {
    return ValidationExceptionReason::INVALID_FIELD_VALUE;
  } else if (hashCode == DUPLICATE_VALUE_HASH) {
    return ValidationExceptionReason::DUPLICATE_VALUE;
  } else if (hashCode == MISSING_REQUIRED_FIELD_HASH) {
    return ValidationExceptionReason::MISSING_REQUIRED_FIELD;
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
    case ValidationExceptionReason::INVALID_FIELD_VALUE:
      return "INVALID_FIELD_VALUE";
    case ValidationExceptionReason::DUPLICATE_VALUE:
      return "DUPLICATE_VALUE";
    case ValidationExceptionReason::MISSING_REQUIRED_FIELD:
      return "MISSING_REQUIRED_FIELD";
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
}  // namespace resiliencehubv2
}  // namespace Aws
