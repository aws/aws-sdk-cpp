/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AssessmentErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AssessmentErrorCodeMapper {

static const int INVALID_PERMISSIONS_HASH = HashingUtils::HashString("INVALID_PERMISSIONS");
static const int CMK_ACCESS_DENIED_HASH = HashingUtils::HashString("CMK_ACCESS_DENIED");
static const int AGENT_ERROR_HASH = HashingUtils::HashString("AGENT_ERROR");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int DESIGN_FILE_ACCESS_DENIED_HASH = HashingUtils::HashString("DESIGN_FILE_ACCESS_DENIED");

AssessmentErrorCode GetAssessmentErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_PERMISSIONS_HASH) {
    return AssessmentErrorCode::INVALID_PERMISSIONS;
  } else if (hashCode == CMK_ACCESS_DENIED_HASH) {
    return AssessmentErrorCode::CMK_ACCESS_DENIED;
  } else if (hashCode == AGENT_ERROR_HASH) {
    return AssessmentErrorCode::AGENT_ERROR;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return AssessmentErrorCode::INTERNAL_ERROR;
  } else if (hashCode == DESIGN_FILE_ACCESS_DENIED_HASH) {
    return AssessmentErrorCode::DESIGN_FILE_ACCESS_DENIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssessmentErrorCode>(hashCode);
  }

  return AssessmentErrorCode::NOT_SET;
}

Aws::String GetNameForAssessmentErrorCode(AssessmentErrorCode enumValue) {
  switch (enumValue) {
    case AssessmentErrorCode::NOT_SET:
      return {};
    case AssessmentErrorCode::INVALID_PERMISSIONS:
      return "INVALID_PERMISSIONS";
    case AssessmentErrorCode::CMK_ACCESS_DENIED:
      return "CMK_ACCESS_DENIED";
    case AssessmentErrorCode::AGENT_ERROR:
      return "AGENT_ERROR";
    case AssessmentErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case AssessmentErrorCode::DESIGN_FILE_ACCESS_DENIED:
      return "DESIGN_FILE_ACCESS_DENIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssessmentErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
