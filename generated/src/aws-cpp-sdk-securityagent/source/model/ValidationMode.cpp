/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ValidationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ValidationModeMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int SIMULATED_HASH = HashingUtils::HashString("SIMULATED");

ValidationMode GetValidationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return ValidationMode::DISABLED;
  } else if (hashCode == SIMULATED_HASH) {
    return ValidationMode::SIMULATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationMode>(hashCode);
  }

  return ValidationMode::NOT_SET;
}

Aws::String GetNameForValidationMode(ValidationMode enumValue) {
  switch (enumValue) {
    case ValidationMode::NOT_SET:
      return {};
    case ValidationMode::DISABLED:
      return "DISABLED";
    case ValidationMode::SIMULATED:
      return "SIMULATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationModeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
