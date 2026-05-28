/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AssessmentStep.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AssessmentStepMapper {

static const int TOPOLOGY_ENHANCEMENT_HASH = HashingUtils::HashString("TOPOLOGY_ENHANCEMENT");
static const int SERVICE_FUNCTION_GENERATION_HASH = HashingUtils::HashString("SERVICE_FUNCTION_GENERATION");
static const int RESILIENCE_ASSESSMENT_HASH = HashingUtils::HashString("RESILIENCE_ASSESSMENT");

AssessmentStep GetAssessmentStepForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOPOLOGY_ENHANCEMENT_HASH) {
    return AssessmentStep::TOPOLOGY_ENHANCEMENT;
  } else if (hashCode == SERVICE_FUNCTION_GENERATION_HASH) {
    return AssessmentStep::SERVICE_FUNCTION_GENERATION;
  } else if (hashCode == RESILIENCE_ASSESSMENT_HASH) {
    return AssessmentStep::RESILIENCE_ASSESSMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssessmentStep>(hashCode);
  }

  return AssessmentStep::NOT_SET;
}

Aws::String GetNameForAssessmentStep(AssessmentStep enumValue) {
  switch (enumValue) {
    case AssessmentStep::NOT_SET:
      return {};
    case AssessmentStep::TOPOLOGY_ENHANCEMENT:
      return "TOPOLOGY_ENHANCEMENT";
    case AssessmentStep::SERVICE_FUNCTION_GENERATION:
      return "SERVICE_FUNCTION_GENERATION";
    case AssessmentStep::RESILIENCE_ASSESSMENT:
      return "RESILIENCE_ASSESSMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssessmentStepMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
