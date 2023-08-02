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
  enum class ExcludeRecommendationReason
  {
    NOT_SET,
    AlreadyImplemented,
    NotRelevant,
    ComplexityOfImplementation
  };

namespace ExcludeRecommendationReasonMapper
{
AWS_RESILIENCEHUB_API ExcludeRecommendationReason GetExcludeRecommendationReasonForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForExcludeRecommendationReason(ExcludeRecommendationReason value);
} // namespace ExcludeRecommendationReasonMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
