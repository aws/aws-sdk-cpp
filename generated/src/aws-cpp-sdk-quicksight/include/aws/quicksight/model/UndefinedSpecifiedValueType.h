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
  enum class UndefinedSpecifiedValueType
  {
    NOT_SET,
    LEAST,
    MOST
  };

namespace UndefinedSpecifiedValueTypeMapper
{
AWS_QUICKSIGHT_API UndefinedSpecifiedValueType GetUndefinedSpecifiedValueTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForUndefinedSpecifiedValueType(UndefinedSpecifiedValueType value);
} // namespace UndefinedSpecifiedValueTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
