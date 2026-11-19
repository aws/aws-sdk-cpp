/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class RecommendedFeatureStatus { NOT_SET, PASS, FAIL };

namespace RecommendedFeatureStatusMapper {
AWS_MARKETPLACECATALOG_API RecommendedFeatureStatus GetRecommendedFeatureStatusForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForRecommendedFeatureStatus(RecommendedFeatureStatus value);
}  // namespace RecommendedFeatureStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
