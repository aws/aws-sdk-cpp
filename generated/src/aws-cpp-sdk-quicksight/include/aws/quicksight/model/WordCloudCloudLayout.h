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
  enum class WordCloudCloudLayout
  {
    NOT_SET,
    FLUID,
    NORMAL
  };

namespace WordCloudCloudLayoutMapper
{
AWS_QUICKSIGHT_API WordCloudCloudLayout GetWordCloudCloudLayoutForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWordCloudCloudLayout(WordCloudCloudLayout value);
} // namespace WordCloudCloudLayoutMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
