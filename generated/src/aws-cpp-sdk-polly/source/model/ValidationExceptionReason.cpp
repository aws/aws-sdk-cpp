/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int unsupportedOperation_HASH = HashingUtils::HashString("unsupportedOperation");
static const int fieldValidationFailed_HASH = HashingUtils::HashString("fieldValidationFailed");
static const int other_HASH = HashingUtils::HashString("other");
static const int invalidInboundEvent_HASH = HashingUtils::HashString("invalidInboundEvent");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == unsupportedOperation_HASH) {
    return ValidationExceptionReason::unsupportedOperation;
  } else if (hashCode == fieldValidationFailed_HASH) {
    return ValidationExceptionReason::fieldValidationFailed;
  } else if (hashCode == other_HASH) {
    return ValidationExceptionReason::other;
  } else if (hashCode == invalidInboundEvent_HASH) {
    return ValidationExceptionReason::invalidInboundEvent;
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
    case ValidationExceptionReason::unsupportedOperation:
      return "unsupportedOperation";
    case ValidationExceptionReason::fieldValidationFailed:
      return "fieldValidationFailed";
    case ValidationExceptionReason::other:
      return "other";
    case ValidationExceptionReason::invalidInboundEvent:
      return "invalidInboundEvent";
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
}  // namespace Polly
}  // namespace Aws
