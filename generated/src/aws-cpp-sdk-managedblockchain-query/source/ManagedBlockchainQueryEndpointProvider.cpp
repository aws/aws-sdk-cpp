/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointProvider.h>
#include <aws/managedblockchain-query/internal/ManagedBlockchainQueryEndpointRules.h>

namespace Aws {
namespace ManagedBlockchainQuery {
namespace Endpoint {
ManagedBlockchainQueryEndpointProvider::ManagedBlockchainQueryEndpointProvider()
    : ManagedBlockchainQueryDefaultEpProviderBase(Aws::ManagedBlockchainQuery::ManagedBlockchainQueryEndpointRules::GetRulesBlob(),
                                                  Aws::ManagedBlockchainQuery::ManagedBlockchainQueryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
