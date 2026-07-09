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

static const int TOPOLOGY_GENERATION_HASH = HashingUtils::HashString("TOPOLOGY_GENERATION");
static const int INPUT_VALIDATION_HASH = HashingUtils::HashString("INPUT_VALIDATION");
static const int DESIGN_ANALYSIS_HASH = HashingUtils::HashString("DESIGN_ANALYSIS");
static const int TOPOLOGY_ENHANCEMENT_HASH = HashingUtils::HashString("TOPOLOGY_ENHANCEMENT");
static const int SERVICE_FUNCTION_GENERATION_HASH = HashingUtils::HashString("SERVICE_FUNCTION_GENERATION");
static const int POLICY_VALIDATION_HASH = HashingUtils::HashString("POLICY_VALIDATION");
static const int RESILIENCE_ASSESSMENT_HASH = HashingUtils::HashString("RESILIENCE_ASSESSMENT");
static const int FAILURE_MODE_FINDINGS_CONSOLIDATION_HASH = HashingUtils::HashString("FAILURE_MODE_FINDINGS_CONSOLIDATION");
static const int FAILURE_MODE_FINDINGS_ENRICHMENT_HASH = HashingUtils::HashString("FAILURE_MODE_FINDINGS_ENRICHMENT");

AssessmentStep GetAssessmentStepForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOPOLOGY_GENERATION_HASH) {
    return AssessmentStep::TOPOLOGY_GENERATION;
  } else if (hashCode == INPUT_VALIDATION_HASH) {
    return AssessmentStep::INPUT_VALIDATION;
  } else if (hashCode == DESIGN_ANALYSIS_HASH) {
    return AssessmentStep::DESIGN_ANALYSIS;
  } else if (hashCode == TOPOLOGY_ENHANCEMENT_HASH) {
    return AssessmentStep::TOPOLOGY_ENHANCEMENT;
  } else if (hashCode == SERVICE_FUNCTION_GENERATION_HASH) {
    return AssessmentStep::SERVICE_FUNCTION_GENERATION;
  } else if (hashCode == POLICY_VALIDATION_HASH) {
    return AssessmentStep::POLICY_VALIDATION;
  } else if (hashCode == RESILIENCE_ASSESSMENT_HASH) {
    return AssessmentStep::RESILIENCE_ASSESSMENT;
  } else if (hashCode == FAILURE_MODE_FINDINGS_CONSOLIDATION_HASH) {
    return AssessmentStep::FAILURE_MODE_FINDINGS_CONSOLIDATION;
  } else if (hashCode == FAILURE_MODE_FINDINGS_ENRICHMENT_HASH) {
    return AssessmentStep::FAILURE_MODE_FINDINGS_ENRICHMENT;
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
    case AssessmentStep::TOPOLOGY_GENERATION:
      return "TOPOLOGY_GENERATION";
    case AssessmentStep::INPUT_VALIDATION:
      return "INPUT_VALIDATION";
    case AssessmentStep::DESIGN_ANALYSIS:
      return "DESIGN_ANALYSIS";
    case AssessmentStep::TOPOLOGY_ENHANCEMENT:
      return "TOPOLOGY_ENHANCEMENT";
    case AssessmentStep::SERVICE_FUNCTION_GENERATION:
      return "SERVICE_FUNCTION_GENERATION";
    case AssessmentStep::POLICY_VALIDATION:
      return "POLICY_VALIDATION";
    case AssessmentStep::RESILIENCE_ASSESSMENT:
      return "RESILIENCE_ASSESSMENT";
    case AssessmentStep::FAILURE_MODE_FINDINGS_CONSOLIDATION:
      return "FAILURE_MODE_FINDINGS_CONSOLIDATION";
    case AssessmentStep::FAILURE_MODE_FINDINGS_ENRICHMENT:
      return "FAILURE_MODE_FINDINGS_ENRICHMENT";
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
