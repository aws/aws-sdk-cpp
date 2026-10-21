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
enum class ExpressPrivateOfferConfigurationSortBy { NOT_SET, EntityId, LastModifiedDate, ProductId, State };

namespace ExpressPrivateOfferConfigurationSortByMapper {
AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSortBy GetExpressPrivateOfferConfigurationSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForExpressPrivateOfferConfigurationSortBy(ExpressPrivateOfferConfigurationSortBy value);
}  // namespace ExpressPrivateOfferConfigurationSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
