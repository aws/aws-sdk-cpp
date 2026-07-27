/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/ManagedBlockchainEndpointProvider.h>
#include <aws/managedblockchain/internal/ManagedBlockchainEndpointRules.h>

namespace Aws {
namespace ManagedBlockchain {
namespace Endpoint {
ManagedBlockchainEndpointProvider::ManagedBlockchainEndpointProvider()
    : ManagedBlockchainDefaultEpProviderBase(Aws::ManagedBlockchain::ManagedBlockchainEndpointRules::GetRulesBlob(),
                                             Aws::ManagedBlockchain::ManagedBlockchainEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ManagedBlockchain
}  // namespace Aws
