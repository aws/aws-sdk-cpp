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
  enum class DataLabelContent
  {
    NOT_SET,
    VALUE,
    PERCENT,
    VALUE_AND_PERCENT
  };

namespace DataLabelContentMapper
{
AWS_QUICKSIGHT_API DataLabelContent GetDataLabelContentForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataLabelContent(DataLabelContent value);
} // namespace DataLabelContentMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
