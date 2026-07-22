/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-deployment/MarketplaceDeploymentEndpointProvider.h>
#include <aws/marketplace-deployment/internal/MarketplaceDeploymentEndpointRules.h>

namespace Aws {
namespace MarketplaceDeployment {
namespace Endpoint {
MarketplaceDeploymentEndpointProvider::MarketplaceDeploymentEndpointProvider()
    : MarketplaceDeploymentDefaultEpProviderBase(Aws::MarketplaceDeployment::MarketplaceDeploymentEndpointRules::GetRulesBlob(),
                                                 Aws::MarketplaceDeployment::MarketplaceDeploymentEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceDeployment
}  // namespace Aws
