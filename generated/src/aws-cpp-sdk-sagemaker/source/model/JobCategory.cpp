/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/JobCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace JobCategoryMapper {

static const int AgentRFT_HASH = HashingUtils::HashString("AgentRFT");
static const int AgentRFTEvaluation_HASH = HashingUtils::HashString("AgentRFTEvaluation");

JobCategory GetJobCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AgentRFT_HASH) {
    return JobCategory::AgentRFT;
  } else if (hashCode == AgentRFTEvaluation_HASH) {
    return JobCategory::AgentRFTEvaluation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobCategory>(hashCode);
  }

  return JobCategory::NOT_SET;
}

Aws::String GetNameForJobCategory(JobCategory enumValue) {
  switch (enumValue) {
    case JobCategory::NOT_SET:
      return {};
    case JobCategory::AgentRFT:
      return "AgentRFT";
    case JobCategory::AgentRFTEvaluation:
      return "AgentRFTEvaluation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobCategoryMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
