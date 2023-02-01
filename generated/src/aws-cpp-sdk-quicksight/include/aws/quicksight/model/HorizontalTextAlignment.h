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
  enum class HorizontalTextAlignment
  {
    NOT_SET,
    LEFT,
    CENTER,
    RIGHT,
    AUTO
  };

namespace HorizontalTextAlignmentMapper
{
AWS_QUICKSIGHT_API HorizontalTextAlignment GetHorizontalTextAlignmentForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForHorizontalTextAlignment(HorizontalTextAlignment value);
} // namespace HorizontalTextAlignmentMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
