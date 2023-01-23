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
  enum class TableBorderStyle
  {
    NOT_SET,
    NONE,
    SOLID
  };

namespace TableBorderStyleMapper
{
AWS_QUICKSIGHT_API TableBorderStyle GetTableBorderStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTableBorderStyle(TableBorderStyle value);
} // namespace TableBorderStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
