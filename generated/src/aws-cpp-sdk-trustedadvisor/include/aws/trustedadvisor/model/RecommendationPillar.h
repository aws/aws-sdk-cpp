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
  enum class RecommendationPillar
  {
    NOT_SET,
    cost_optimizing,
    performance,
    security,
    service_limits,
    fault_tolerance,
    operational_excellence
  };

namespace RecommendationPillarMapper
{
AWS_TRUSTEDADVISOR_API RecommendationPillar GetRecommendationPillarForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForRecommendationPillar(RecommendationPillar value);
} // namespace RecommendationPillarMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
