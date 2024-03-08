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
  enum class UpdateRecommendationLifecycleStage
  {
    NOT_SET,
    pending_response,
    in_progress,
    dismissed,
    resolved
  };

namespace UpdateRecommendationLifecycleStageMapper
{
AWS_TRUSTEDADVISOR_API UpdateRecommendationLifecycleStage GetUpdateRecommendationLifecycleStageForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForUpdateRecommendationLifecycleStage(UpdateRecommendationLifecycleStage value);
} // namespace UpdateRecommendationLifecycleStageMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
