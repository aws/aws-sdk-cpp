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
  enum class NamedFilterType
  {
    NOT_SET,
    CATEGORY_FILTER,
    NUMERIC_EQUALITY_FILTER,
    NUMERIC_RANGE_FILTER,
    DATE_RANGE_FILTER,
    RELATIVE_DATE_FILTER
  };

namespace NamedFilterTypeMapper
{
AWS_QUICKSIGHT_API NamedFilterType GetNamedFilterTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNamedFilterType(NamedFilterType value);
} // namespace NamedFilterTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
