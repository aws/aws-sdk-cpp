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
  enum class FontStyle
  {
    NOT_SET,
    NORMAL,
    ITALIC
  };

namespace FontStyleMapper
{
AWS_QUICKSIGHT_API FontStyle GetFontStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFontStyle(FontStyle value);
} // namespace FontStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
