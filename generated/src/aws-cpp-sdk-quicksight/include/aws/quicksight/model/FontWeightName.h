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
  enum class FontWeightName
  {
    NOT_SET,
    NORMAL,
    BOLD
  };

namespace FontWeightNameMapper
{
AWS_QUICKSIGHT_API FontWeightName GetFontWeightNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFontWeightName(FontWeightName value);
} // namespace FontWeightNameMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
