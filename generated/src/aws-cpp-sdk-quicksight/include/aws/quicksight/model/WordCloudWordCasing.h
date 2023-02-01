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
  enum class WordCloudWordCasing
  {
    NOT_SET,
    LOWER_CASE,
    EXISTING_CASE
  };

namespace WordCloudWordCasingMapper
{
AWS_QUICKSIGHT_API WordCloudWordCasing GetWordCloudWordCasingForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWordCloudWordCasing(WordCloudWordCasing value);
} // namespace WordCloudWordCasingMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
