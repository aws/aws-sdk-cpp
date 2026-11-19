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
enum class ContentRecommendationStatus { NOT_SET, GENERATED, INSUFFICIENT_CONTEXT };

namespace ContentRecommendationStatusMapper {
AWS_MARKETPLACECATALOG_API ContentRecommendationStatus GetContentRecommendationStatusForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForContentRecommendationStatus(ContentRecommendationStatus value);
}  // namespace ContentRecommendationStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
