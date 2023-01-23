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
  enum class FontDecoration
  {
    NOT_SET,
    UNDERLINE,
    NONE
  };

namespace FontDecorationMapper
{
AWS_QUICKSIGHT_API FontDecoration GetFontDecorationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFontDecoration(FontDecoration value);
} // namespace FontDecorationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
