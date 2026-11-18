/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class AnalyticsMode { NOT_SET, CROSS_REGION, DISABLED };

namespace AnalyticsModeMapper {
AWS_WAFV2_API AnalyticsMode GetAnalyticsModeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForAnalyticsMode(AnalyticsMode value);
}  // namespace AnalyticsModeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
