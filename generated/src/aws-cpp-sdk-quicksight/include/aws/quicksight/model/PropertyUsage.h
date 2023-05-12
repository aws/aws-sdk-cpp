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
  enum class PropertyUsage
  {
    NOT_SET,
    INHERIT,
    DIMENSION,
    MEASURE
  };

namespace PropertyUsageMapper
{
AWS_QUICKSIGHT_API PropertyUsage GetPropertyUsageForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPropertyUsage(PropertyUsage value);
} // namespace PropertyUsageMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
