/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/model/AdditionalSecurityRequirement.h>

using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {
namespace AdditionalSecurityRequirementMapper {

static const int APPROVER_VERIFICATION_REQUIRED_HASH = HashingUtils::HashString("APPROVER_VERIFICATION_REQUIRED");

AdditionalSecurityRequirement GetAdditionalSecurityRequirementForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVER_VERIFICATION_REQUIRED_HASH) {
    return AdditionalSecurityRequirement::APPROVER_VERIFICATION_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdditionalSecurityRequirement>(hashCode);
  }

  return AdditionalSecurityRequirement::NOT_SET;
}

Aws::String GetNameForAdditionalSecurityRequirement(AdditionalSecurityRequirement enumValue) {
  switch (enumValue) {
    case AdditionalSecurityRequirement::NOT_SET:
      return {};
    case AdditionalSecurityRequirement::APPROVER_VERIFICATION_REQUIRED:
      return "APPROVER_VERIFICATION_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdditionalSecurityRequirementMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
