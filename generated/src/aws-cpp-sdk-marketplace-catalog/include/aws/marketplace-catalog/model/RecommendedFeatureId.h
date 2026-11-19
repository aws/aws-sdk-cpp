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
enum class RecommendedFeatureId { NOT_SET, REQUEST_PRIVATE_OFFER, REQUEST_A_DEMO, PROMOTIONAL_MEDIA, FREE_TRIAL, QUICK_LAUNCH };

namespace RecommendedFeatureIdMapper {
AWS_MARKETPLACECATALOG_API RecommendedFeatureId GetRecommendedFeatureIdForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForRecommendedFeatureId(RecommendedFeatureId value);
}  // namespace RecommendedFeatureIdMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
