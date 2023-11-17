/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{
  enum class RecommendationLifecycleStage
  {
    NOT_SET,
    in_progress,
    pending_response,
    dismissed,
    resolved
  };

namespace RecommendationLifecycleStageMapper
{
AWS_TRUSTEDADVISOR_API RecommendationLifecycleStage GetRecommendationLifecycleStageForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForRecommendationLifecycleStage(RecommendationLifecycleStage value);
} // namespace RecommendationLifecycleStageMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
