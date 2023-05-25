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
  enum class FilterVisualScope
  {
    NOT_SET,
    ALL_VISUALS,
    SELECTED_VISUALS
  };

namespace FilterVisualScopeMapper
{
AWS_QUICKSIGHT_API FilterVisualScope GetFilterVisualScopeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFilterVisualScope(FilterVisualScope value);
} // namespace FilterVisualScopeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
