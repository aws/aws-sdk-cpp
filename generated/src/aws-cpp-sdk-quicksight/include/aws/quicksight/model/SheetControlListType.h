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
  enum class SheetControlListType
  {
    NOT_SET,
    MULTI_SELECT,
    SINGLE_SELECT
  };

namespace SheetControlListTypeMapper
{
AWS_QUICKSIGHT_API SheetControlListType GetSheetControlListTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSheetControlListType(SheetControlListType value);
} // namespace SheetControlListTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
