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
  enum class RecommendationSource
  {
    NOT_SET,
    aws_config,
    compute_optimizer,
    cost_explorer,
    lse,
    manual,
    pse,
    rds,
    resilience,
    resilience_hub,
    security_hub,
    stir,
    ta_check,
    well_architected
  };

namespace RecommendationSourceMapper
{
AWS_TRUSTEDADVISOR_API RecommendationSource GetRecommendationSourceForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForRecommendationSource(RecommendationSource value);
} // namespace RecommendationSourceMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
