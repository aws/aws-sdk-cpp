/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/ApprovalRequirement.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace ApprovalRequirementMapper {

static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
static const int NOT_REQUIRED_HASH = HashingUtils::HashString("NOT_REQUIRED");

ApprovalRequirement GetApprovalRequirementForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_HASH) {
    return ApprovalRequirement::REQUIRED;
  } else if (hashCode == NOT_REQUIRED_HASH) {
    return ApprovalRequirement::NOT_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApprovalRequirement>(hashCode);
  }

  return ApprovalRequirement::NOT_SET;
}

Aws::String GetNameForApprovalRequirement(ApprovalRequirement enumValue) {
  switch (enumValue) {
    case ApprovalRequirement::NOT_SET:
      return {};
    case ApprovalRequirement::REQUIRED:
      return "REQUIRED";
    case ApprovalRequirement::NOT_REQUIRED:
      return "NOT_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApprovalRequirementMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
