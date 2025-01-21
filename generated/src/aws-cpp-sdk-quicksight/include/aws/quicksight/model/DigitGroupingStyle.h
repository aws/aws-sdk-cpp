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
  enum class DigitGroupingStyle
  {
    NOT_SET,
    DEFAULT,
    LAKHS
  };

namespace DigitGroupingStyleMapper
{
AWS_QUICKSIGHT_API DigitGroupingStyle GetDigitGroupingStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDigitGroupingStyle(DigitGroupingStyle value);
} // namespace DigitGroupingStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
