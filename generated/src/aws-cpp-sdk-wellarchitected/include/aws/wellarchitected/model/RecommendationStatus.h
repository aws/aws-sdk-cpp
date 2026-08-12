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
enum class RecommendationStatus { NOT_SET, ACTIVE, SUPPRESSED, COMPLETED };

namespace RecommendationStatusMapper {
AWS_WELLARCHITECTED_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
}  // namespace RecommendationStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
