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
  enum class LayoutElementType
  {
    NOT_SET,
    VISUAL,
    FILTER_CONTROL,
    PARAMETER_CONTROL,
    TEXT_BOX
  };

namespace LayoutElementTypeMapper
{
AWS_QUICKSIGHT_API LayoutElementType GetLayoutElementTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLayoutElementType(LayoutElementType value);
} // namespace LayoutElementTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
