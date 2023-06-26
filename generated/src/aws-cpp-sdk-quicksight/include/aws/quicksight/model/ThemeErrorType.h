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
  enum class ThemeErrorType
  {
    NOT_SET,
    INTERNAL_FAILURE
  };

namespace ThemeErrorTypeMapper
{
AWS_QUICKSIGHT_API ThemeErrorType GetThemeErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForThemeErrorType(ThemeErrorType value);
} // namespace ThemeErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
