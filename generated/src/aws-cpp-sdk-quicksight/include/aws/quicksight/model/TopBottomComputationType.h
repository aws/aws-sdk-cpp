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
  enum class TopBottomComputationType
  {
    NOT_SET,
    TOP,
    BOTTOM
  };

namespace TopBottomComputationTypeMapper
{
AWS_QUICKSIGHT_API TopBottomComputationType GetTopBottomComputationTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopBottomComputationType(TopBottomComputationType value);
} // namespace TopBottomComputationTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
