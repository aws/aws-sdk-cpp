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
  enum class TransposedColumnType
  {
    NOT_SET,
    ROW_HEADER_COLUMN,
    VALUE_COLUMN
  };

namespace TransposedColumnTypeMapper
{
AWS_QUICKSIGHT_API TransposedColumnType GetTransposedColumnTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTransposedColumnType(TransposedColumnType value);
} // namespace TransposedColumnTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
