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
  enum class LineInterpolation
  {
    NOT_SET,
    LINEAR,
    SMOOTH,
    STEPPED
  };

namespace LineInterpolationMapper
{
AWS_QUICKSIGHT_API LineInterpolation GetLineInterpolationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLineInterpolation(LineInterpolation value);
} // namespace LineInterpolationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
