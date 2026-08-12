/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class RecommendationSource {
  NOT_SET,
  TRUSTED_ADVISOR,
  COST_EXPLORER,
  CLOUDWATCH,
  WELL_ARCHITECTED_TOOL,
  WELL_ARCHITECTED_AGENT,
  CUSTOMER_IAC
};

namespace RecommendationSourceMapper {
AWS_WELLARCHITECTED_API RecommendationSource GetRecommendationSourceForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRecommendationSource(RecommendationSource value);
}  // namespace RecommendationSourceMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
