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
  enum class NumericSeparatorSymbol
  {
    NOT_SET,
    COMMA,
    DOT,
    SPACE
  };

namespace NumericSeparatorSymbolMapper
{
AWS_QUICKSIGHT_API NumericSeparatorSymbol GetNumericSeparatorSymbolForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNumericSeparatorSymbol(NumericSeparatorSymbol value);
} // namespace NumericSeparatorSymbolMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
