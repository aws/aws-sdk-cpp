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
enum class AssessmentSortField { NOT_SET, STARTED_AT };

namespace AssessmentSortFieldMapper {
AWS_RESILIENCEHUBV2_API AssessmentSortField GetAssessmentSortFieldForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForAssessmentSortField(AssessmentSortField value);
}  // namespace AssessmentSortFieldMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
