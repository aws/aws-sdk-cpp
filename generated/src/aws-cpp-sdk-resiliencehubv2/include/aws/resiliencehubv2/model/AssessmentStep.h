/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class AssessmentStep {
  NOT_SET,
  TOPOLOGY_GENERATION,
  INPUT_VALIDATION,
  DESIGN_ANALYSIS,
  TOPOLOGY_ENHANCEMENT,
  SERVICE_FUNCTION_GENERATION,
  POLICY_VALIDATION,
  RESILIENCE_ASSESSMENT,
  FAILURE_MODE_FINDINGS_CONSOLIDATION,
  FAILURE_MODE_FINDINGS_ENRICHMENT
};

namespace AssessmentStepMapper {
AWS_RESILIENCEHUBV2_API AssessmentStep GetAssessmentStepForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForAssessmentStep(AssessmentStep value);
}  // namespace AssessmentStepMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
