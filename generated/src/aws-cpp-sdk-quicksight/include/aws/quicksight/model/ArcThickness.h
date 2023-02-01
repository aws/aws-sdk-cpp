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
  enum class ArcThickness
  {
    NOT_SET,
    SMALL,
    MEDIUM,
    LARGE,
    WHOLE
  };

namespace ArcThicknessMapper
{
AWS_QUICKSIGHT_API ArcThickness GetArcThicknessForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForArcThickness(ArcThickness value);
} // namespace ArcThicknessMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
