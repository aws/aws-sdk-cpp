/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class ContentQualityAnalysisState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ContentQualityAnalysisStateMapper
{
AWS_MEDIACONNECT_API ContentQualityAnalysisState GetContentQualityAnalysisStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForContentQualityAnalysisState(ContentQualityAnalysisState value);
} // namespace ContentQualityAnalysisStateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
