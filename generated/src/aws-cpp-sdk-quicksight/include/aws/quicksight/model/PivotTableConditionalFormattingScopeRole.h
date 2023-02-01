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
  enum class PivotTableConditionalFormattingScopeRole
  {
    NOT_SET,
    FIELD,
    FIELD_TOTAL,
    GRAND_TOTAL
  };

namespace PivotTableConditionalFormattingScopeRoleMapper
{
AWS_QUICKSIGHT_API PivotTableConditionalFormattingScopeRole GetPivotTableConditionalFormattingScopeRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPivotTableConditionalFormattingScopeRole(PivotTableConditionalFormattingScopeRole value);
} // namespace PivotTableConditionalFormattingScopeRoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
