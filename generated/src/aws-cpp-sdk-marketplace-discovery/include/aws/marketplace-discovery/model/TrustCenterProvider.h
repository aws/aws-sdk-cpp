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
enum class TrustCenterProvider { NOT_SET, DRATA, VANTA, OTHER };

namespace TrustCenterProviderMapper {
AWS_MARKETPLACEDISCOVERY_API TrustCenterProvider GetTrustCenterProviderForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForTrustCenterProvider(TrustCenterProvider value);
}  // namespace TrustCenterProviderMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
