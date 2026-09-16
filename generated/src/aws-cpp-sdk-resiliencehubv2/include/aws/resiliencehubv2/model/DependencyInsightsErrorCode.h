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
enum class DependencyInsightsErrorCode { NOT_SET, INSUFFICIENT_DATA, LLM_GENERATION_FAILED, INTERNAL_ERROR };

namespace DependencyInsightsErrorCodeMapper {
AWS_RESILIENCEHUBV2_API DependencyInsightsErrorCode GetDependencyInsightsErrorCodeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForDependencyInsightsErrorCode(DependencyInsightsErrorCode value);
}  // namespace DependencyInsightsErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
