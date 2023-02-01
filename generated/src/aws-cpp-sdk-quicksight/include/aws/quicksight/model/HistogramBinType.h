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
  enum class HistogramBinType
  {
    NOT_SET,
    BIN_COUNT,
    BIN_WIDTH
  };

namespace HistogramBinTypeMapper
{
AWS_QUICKSIGHT_API HistogramBinType GetHistogramBinTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForHistogramBinType(HistogramBinType value);
} // namespace HistogramBinTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
