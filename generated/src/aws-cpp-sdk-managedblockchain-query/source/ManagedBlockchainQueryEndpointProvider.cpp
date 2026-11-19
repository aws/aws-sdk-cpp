/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointProvider.h>
#include <aws/managedblockchain-query/internal/ManagedBlockchainQueryEndpointRules.h>

namespace Aws {
#ifndef AWS_MANAGEDBLOCKCHAINQUERY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientConfiguration,
                                                   ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryBuiltInParameters,
                                                   ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientConfiguration,
                                                  ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryBuiltInParameters,
                                                  ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ManagedBlockchainQuery {
namespace Endpoint {
ManagedBlockchainQueryEndpointProvider::ManagedBlockchainQueryEndpointProvider()
    : ManagedBlockchainQueryDefaultEpProviderBase(Aws::ManagedBlockchainQuery::ManagedBlockchainQueryEndpointRules::GetRulesBlob(),
                                                  Aws::ManagedBlockchainQuery::ManagedBlockchainQueryEndpointRules::RulesBlobSize) {}

void ManagedBlockchainQueryBuiltInParameters::SetFromClientConfiguration(const ManagedBlockchainQueryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ManagedBlockchainQueryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ManagedBlockchainQueryBuiltInParameters::SetFromClientConfiguration(const ManagedBlockchainQueryClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ManagedBlockchainQueryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ManagedBlockchainQueryBuiltInParameters::SetServiceSpecificParameters(const ManagedBlockchainQueryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
