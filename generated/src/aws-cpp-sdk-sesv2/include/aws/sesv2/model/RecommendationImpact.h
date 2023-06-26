/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class RecommendationImpact
  {
    NOT_SET,
    LOW,
    HIGH
  };

namespace RecommendationImpactMapper
{
AWS_SESV2_API RecommendationImpact GetRecommendationImpactForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForRecommendationImpact(RecommendationImpact value);
} // namespace RecommendationImpactMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
