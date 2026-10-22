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
enum class ExpressPrivateOfferConfigurationStateString { NOT_SET, ACTIVE, INACTIVE };

namespace ExpressPrivateOfferConfigurationStateStringMapper {
AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationStateString
GetExpressPrivateOfferConfigurationStateStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForExpressPrivateOfferConfigurationStateString(
    ExpressPrivateOfferConfigurationStateString value);
}  // namespace ExpressPrivateOfferConfigurationStateStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
