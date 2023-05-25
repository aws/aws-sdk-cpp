/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ComparisonMethod
  {
    NOT_SET,
    DIFFERENCE,
    PERCENT_DIFFERENCE,
    PERCENT
  };

namespace ComparisonMethodMapper
{
AWS_QUICKSIGHT_API ComparisonMethod GetComparisonMethodForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForComparisonMethod(ComparisonMethod value);
} // namespace ComparisonMethodMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
