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
enum class RecommendationSeverity { NOT_SET, BLOCKING, ADVISORY };

namespace RecommendationSeverityMapper {
AWS_MARKETPLACECATALOG_API RecommendationSeverity GetRecommendationSeverityForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForRecommendationSeverity(RecommendationSeverity value);
}  // namespace RecommendationSeverityMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
