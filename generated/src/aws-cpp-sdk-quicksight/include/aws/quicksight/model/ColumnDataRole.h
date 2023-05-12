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
  enum class ColumnDataRole
  {
    NOT_SET,
    DIMENSION,
    MEASURE
  };

namespace ColumnDataRoleMapper
{
AWS_QUICKSIGHT_API ColumnDataRole GetColumnDataRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColumnDataRole(ColumnDataRole value);
} // namespace ColumnDataRoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
