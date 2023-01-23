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
  enum class SheetControlDateTimePickerType
  {
    NOT_SET,
    SINGLE_VALUED,
    DATE_RANGE
  };

namespace SheetControlDateTimePickerTypeMapper
{
AWS_QUICKSIGHT_API SheetControlDateTimePickerType GetSheetControlDateTimePickerTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSheetControlDateTimePickerType(SheetControlDateTimePickerType value);
} // namespace SheetControlDateTimePickerTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
