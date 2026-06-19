/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ValidationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ValidationStatusMapper {

static const int CONFIRMED_HASH = HashingUtils::HashString("CONFIRMED");
static const int NOT_REPRODUCED_HASH = HashingUtils::HashString("NOT_REPRODUCED");
static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
static const int NOT_VALIDATED_HASH = HashingUtils::HashString("NOT_VALIDATED");

ValidationStatus GetValidationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFIRMED_HASH) {
    return ValidationStatus::CONFIRMED;
  } else if (hashCode == NOT_REPRODUCED_HASH) {
    return ValidationStatus::NOT_REPRODUCED;
  } else if (hashCode == VALIDATION_FAILED_HASH) {
    return ValidationStatus::VALIDATION_FAILED;
  } else if (hashCode == VALIDATING_HASH) {
    return ValidationStatus::VALIDATING;
  } else if (hashCode == NOT_VALIDATED_HASH) {
    return ValidationStatus::NOT_VALIDATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationStatus>(hashCode);
  }

  return ValidationStatus::NOT_SET;
}

Aws::String GetNameForValidationStatus(ValidationStatus enumValue) {
  switch (enumValue) {
    case ValidationStatus::NOT_SET:
      return {};
    case ValidationStatus::CONFIRMED:
      return "CONFIRMED";
    case ValidationStatus::NOT_REPRODUCED:
      return "NOT_REPRODUCED";
    case ValidationStatus::VALIDATION_FAILED:
      return "VALIDATION_FAILED";
    case ValidationStatus::VALIDATING:
      return "VALIDATING";
    case ValidationStatus::NOT_VALIDATED:
      return "NOT_VALIDATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
