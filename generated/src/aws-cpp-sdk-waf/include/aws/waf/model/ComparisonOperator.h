/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    EQ,
    NE,
    LE,
    LT,
    GE,
    GT
  };

namespace ComparisonOperatorMapper
{
AWS_WAF_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
