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
  enum class InputColumnDataType
  {
    NOT_SET,
    STRING,
    INTEGER,
    DECIMAL,
    DATETIME,
    BIT,
    BOOLEAN,
    JSON
  };

namespace InputColumnDataTypeMapper
{
AWS_QUICKSIGHT_API InputColumnDataType GetInputColumnDataTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForInputColumnDataType(InputColumnDataType value);
} // namespace InputColumnDataTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
