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
  enum class SheetControlSliderType
  {
    NOT_SET,
    SINGLE_POINT,
    RANGE
  };

namespace SheetControlSliderTypeMapper
{
AWS_QUICKSIGHT_API SheetControlSliderType GetSheetControlSliderTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSheetControlSliderType(SheetControlSliderType value);
} // namespace SheetControlSliderTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
