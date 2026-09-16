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
enum class DependencyInsightsStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED };

namespace DependencyInsightsStatusMapper {
AWS_RESILIENCEHUBV2_API DependencyInsightsStatus GetDependencyInsightsStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForDependencyInsightsStatus(DependencyInsightsStatus value);
}  // namespace DependencyInsightsStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
