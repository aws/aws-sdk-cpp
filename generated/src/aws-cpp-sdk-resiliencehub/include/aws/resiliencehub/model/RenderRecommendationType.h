/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class RenderRecommendationType
  {
    NOT_SET,
    Alarm,
    Sop,
    Test
  };

namespace RenderRecommendationTypeMapper
{
AWS_RESILIENCEHUB_API RenderRecommendationType GetRenderRecommendationTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForRenderRecommendationType(RenderRecommendationType value);
} // namespace RenderRecommendationTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
