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
  enum class WordCloudWordScaling
  {
    NOT_SET,
    EMPHASIZE,
    NORMAL
  };

namespace WordCloudWordScalingMapper
{
AWS_QUICKSIGHT_API WordCloudWordScaling GetWordCloudWordScalingForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWordCloudWordScaling(WordCloudWordScaling value);
} // namespace WordCloudWordScalingMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
