/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int FieldValidationFailed_HASH = HashingUtils::HashString("FieldValidationFailed");
static const int InvalidStatus_HASH = HashingUtils::HashString("InvalidStatus");
static const int GuardrailIntervened_HASH = HashingUtils::HashString("GuardrailIntervened");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FieldValidationFailed_HASH) {
    return ValidationExceptionReason::FieldValidationFailed;
  } else if (hashCode == InvalidStatus_HASH) {
    return ValidationExceptionReason::InvalidStatus;
  } else if (hashCode == GuardrailIntervened_HASH) {
    return ValidationExceptionReason::GuardrailIntervened;
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
    case ValidationExceptionReason::FieldValidationFailed:
      return "FieldValidationFailed";
    case ValidationExceptionReason::InvalidStatus:
      return "InvalidStatus";
    case ValidationExceptionReason::GuardrailIntervened:
      return "GuardrailIntervened";
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
}  // namespace NovaAct
}  // namespace Aws
