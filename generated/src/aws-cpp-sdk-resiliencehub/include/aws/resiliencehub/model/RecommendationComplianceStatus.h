﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class RecommendationComplianceStatus { NOT_SET, BreachedUnattainable, BreachedCanMeet, MetCanImprove, MissingPolicy };

namespace RecommendationComplianceStatusMapper {
AWS_RESILIENCEHUB_API RecommendationComplianceStatus GetRecommendationComplianceStatusForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForRecommendationComplianceStatus(RecommendationComplianceStatus value);
}  // namespace RecommendationComplianceStatusMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
