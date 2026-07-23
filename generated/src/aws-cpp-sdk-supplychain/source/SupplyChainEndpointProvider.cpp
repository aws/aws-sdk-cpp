/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/SupplyChainEndpointProvider.h>
#include <aws/supplychain/internal/SupplyChainEndpointRules.h>

namespace Aws {
namespace SupplyChain {
namespace Endpoint {
SupplyChainEndpointProvider::SupplyChainEndpointProvider()
    : SupplyChainDefaultEpProviderBase(Aws::SupplyChain::SupplyChainEndpointRules::GetRulesBlob(),
                                       Aws::SupplyChain::SupplyChainEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SupplyChain
}  // namespace Aws
