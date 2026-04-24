/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class ReviewSourceId { NOT_SET, AWS_MARKETPLACE };

namespace ReviewSourceIdMapper {
AWS_MARKETPLACEDISCOVERY_API ReviewSourceId GetReviewSourceIdForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForReviewSourceId(ReviewSourceId value);
}  // namespace ReviewSourceIdMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
