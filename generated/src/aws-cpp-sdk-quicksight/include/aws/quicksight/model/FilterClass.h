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
  enum class FilterClass
  {
    NOT_SET,
    ENFORCED_VALUE_FILTER,
    CONDITIONAL_VALUE_FILTER,
    NAMED_VALUE_FILTER
  };

namespace FilterClassMapper
{
AWS_QUICKSIGHT_API FilterClass GetFilterClassForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFilterClass(FilterClass value);
} // namespace FilterClassMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
