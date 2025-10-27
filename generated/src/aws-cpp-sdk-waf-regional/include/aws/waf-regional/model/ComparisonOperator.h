/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/WAFRegional_EXPORTS.h>

namespace Aws {
namespace WAFRegional {
namespace Model {
enum class ComparisonOperator { NOT_SET, EQ, NE, LE, LT, GE, GT };

namespace ComparisonOperatorMapper {
AWS_WAFREGIONAL_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace WAFRegional
}  // namespace Aws
