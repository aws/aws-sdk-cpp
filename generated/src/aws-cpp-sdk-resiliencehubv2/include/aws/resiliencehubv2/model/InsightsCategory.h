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
enum class InsightsCategory { NOT_SET, CROSS_REGION, NEW_DEPENDENCY, THIRD_PARTY, UNEVEN_USAGE, AWS_SERVICE };

namespace InsightsCategoryMapper {
AWS_RESILIENCEHUBV2_API InsightsCategory GetInsightsCategoryForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForInsightsCategory(InsightsCategory value);
}  // namespace InsightsCategoryMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
