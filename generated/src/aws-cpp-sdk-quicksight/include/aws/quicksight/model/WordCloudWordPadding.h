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
  enum class WordCloudWordPadding
  {
    NOT_SET,
    NONE,
    SMALL,
    MEDIUM,
    LARGE
  };

namespace WordCloudWordPaddingMapper
{
AWS_QUICKSIGHT_API WordCloudWordPadding GetWordCloudWordPaddingForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWordCloudWordPadding(WordCloudWordPadding value);
} // namespace WordCloudWordPaddingMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
