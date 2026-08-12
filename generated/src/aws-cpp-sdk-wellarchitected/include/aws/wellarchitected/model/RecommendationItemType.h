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
enum class RecommendationItemType { NOT_SET, AWS_RESOURCE, RECOMMENDATION };

namespace RecommendationItemTypeMapper {
AWS_WELLARCHITECTED_API RecommendationItemType GetRecommendationItemTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRecommendationItemType(RecommendationItemType value);
}  // namespace RecommendationItemTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
