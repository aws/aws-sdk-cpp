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
  enum class WordCloudWordOrientation
  {
    NOT_SET,
    HORIZONTAL,
    HORIZONTAL_AND_VERTICAL
  };

namespace WordCloudWordOrientationMapper
{
AWS_QUICKSIGHT_API WordCloudWordOrientation GetWordCloudWordOrientationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWordCloudWordOrientation(WordCloudWordOrientation value);
} // namespace WordCloudWordOrientationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
