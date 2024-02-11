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
  enum class RecommendationStatus
  {
    NOT_SET,
    ok,
    warning,
    error
  };

namespace RecommendationStatusMapper
{
AWS_TRUSTEDADVISOR_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
} // namespace RecommendationStatusMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
