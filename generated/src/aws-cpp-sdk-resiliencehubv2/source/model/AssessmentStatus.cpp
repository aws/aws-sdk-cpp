/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AssessmentStatusMapper {

static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");

AssessmentStatus GetAssessmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_STARTED_HASH) {
    return AssessmentStatus::NOT_STARTED;
  } else if (hashCode == PENDING_HASH) {
    return AssessmentStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return AssessmentStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return AssessmentStatus::FAILED;
  } else if (hashCode == SUCCESS_HASH) {
    return AssessmentStatus::SUCCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssessmentStatus>(hashCode);
  }

  return AssessmentStatus::NOT_SET;
}

Aws::String GetNameForAssessmentStatus(AssessmentStatus enumValue) {
  switch (enumValue) {
    case AssessmentStatus::NOT_SET:
      return {};
    case AssessmentStatus::NOT_STARTED:
      return "NOT_STARTED";
    case AssessmentStatus::PENDING:
      return "PENDING";
    case AssessmentStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case AssessmentStatus::FAILED:
      return "FAILED";
    case AssessmentStatus::SUCCESS:
      return "SUCCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssessmentStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
