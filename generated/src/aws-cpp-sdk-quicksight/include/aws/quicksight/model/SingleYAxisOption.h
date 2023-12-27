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
  enum class SingleYAxisOption
  {
    NOT_SET,
    PRIMARY_Y_AXIS
  };

namespace SingleYAxisOptionMapper
{
AWS_QUICKSIGHT_API SingleYAxisOption GetSingleYAxisOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSingleYAxisOption(SingleYAxisOption value);
} // namespace SingleYAxisOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
