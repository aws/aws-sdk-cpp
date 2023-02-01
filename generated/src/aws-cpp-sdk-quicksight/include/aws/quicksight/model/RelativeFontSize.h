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
  enum class RelativeFontSize
  {
    NOT_SET,
    EXTRA_SMALL,
    SMALL,
    MEDIUM,
    LARGE,
    EXTRA_LARGE
  };

namespace RelativeFontSizeMapper
{
AWS_QUICKSIGHT_API RelativeFontSize GetRelativeFontSizeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRelativeFontSize(RelativeFontSize value);
} // namespace RelativeFontSizeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
