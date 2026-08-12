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
enum class RecommendationState { NOT_SET, OPEN, CLOSED };

namespace RecommendationStateMapper {
AWS_WELLARCHITECTED_API RecommendationState GetRecommendationStateForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRecommendationState(RecommendationState value);
}  // namespace RecommendationStateMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
