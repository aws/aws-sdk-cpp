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
enum class AssessmentStatus { NOT_SET, NOT_STARTED, PENDING, IN_PROGRESS, FAILED, SUCCESS };

namespace AssessmentStatusMapper {
AWS_RESILIENCEHUBV2_API AssessmentStatus GetAssessmentStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForAssessmentStatus(AssessmentStatus value);
}  // namespace AssessmentStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
