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
  enum class NumericFilterSelectAllOptions
  {
    NOT_SET,
    FILTER_ALL_VALUES
  };

namespace NumericFilterSelectAllOptionsMapper
{
AWS_QUICKSIGHT_API NumericFilterSelectAllOptions GetNumericFilterSelectAllOptionsForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNumericFilterSelectAllOptions(NumericFilterSelectAllOptions value);
} // namespace NumericFilterSelectAllOptionsMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
