/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int ACCOUNT_NOT_ONBOARDED_HASH = HashingUtils::HashString("ACCOUNT_NOT_ONBOARDED");
static const int FIELD_VALIDATION_FAILED_HASH = HashingUtils::HashString("FIELD_VALIDATION_FAILED");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_NOT_ONBOARDED_HASH) {
    return ValidationExceptionReason::ACCOUNT_NOT_ONBOARDED;
  } else if (hashCode == FIELD_VALIDATION_FAILED_HASH) {
    return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
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
    case ValidationExceptionReason::ACCOUNT_NOT_ONBOARDED:
      return "ACCOUNT_NOT_ONBOARDED";
    case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
      return "FIELD_VALIDATION_FAILED";
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
}  // namespace NetworkSecurityManager
}  // namespace Aws
