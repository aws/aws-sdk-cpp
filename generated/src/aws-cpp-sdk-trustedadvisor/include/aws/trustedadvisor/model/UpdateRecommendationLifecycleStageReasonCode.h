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
  enum class UpdateRecommendationLifecycleStageReasonCode
  {
    NOT_SET,
    non_critical_account,
    temporary_account,
    valid_business_case,
    other_methods_available,
    low_priority,
    not_applicable,
    other
  };

namespace UpdateRecommendationLifecycleStageReasonCodeMapper
{
AWS_TRUSTEDADVISOR_API UpdateRecommendationLifecycleStageReasonCode GetUpdateRecommendationLifecycleStageReasonCodeForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForUpdateRecommendationLifecycleStageReasonCode(UpdateRecommendationLifecycleStageReasonCode value);
} // namespace UpdateRecommendationLifecycleStageReasonCodeMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
