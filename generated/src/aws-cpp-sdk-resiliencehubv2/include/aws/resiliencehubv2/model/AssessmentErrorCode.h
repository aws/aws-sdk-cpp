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
enum class AssessmentErrorCode { NOT_SET, INVALID_PERMISSIONS, CMK_ACCESS_DENIED, AGENT_ERROR, INTERNAL_ERROR, DESIGN_FILE_ACCESS_DENIED };

namespace AssessmentErrorCodeMapper {
AWS_RESILIENCEHUBV2_API AssessmentErrorCode GetAssessmentErrorCodeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForAssessmentErrorCode(AssessmentErrorCode value);
}  // namespace AssessmentErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
