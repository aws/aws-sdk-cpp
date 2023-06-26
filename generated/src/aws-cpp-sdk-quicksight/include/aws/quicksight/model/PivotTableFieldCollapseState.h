﻿/**
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
  enum class PivotTableFieldCollapseState
  {
    NOT_SET,
    COLLAPSED,
    EXPANDED
  };

namespace PivotTableFieldCollapseStateMapper
{
AWS_QUICKSIGHT_API PivotTableFieldCollapseState GetPivotTableFieldCollapseStateForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPivotTableFieldCollapseState(PivotTableFieldCollapseState value);
} // namespace PivotTableFieldCollapseStateMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
