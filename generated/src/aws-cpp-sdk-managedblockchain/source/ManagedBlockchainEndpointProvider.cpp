/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/ManagedBlockchainEndpointProvider.h>
#include <aws/managedblockchain/internal/ManagedBlockchainEndpointRules.h>

namespace Aws {
#ifndef AWS_MANAGEDBLOCKCHAIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ManagedBlockchain::Endpoint::ManagedBlockchainClientConfiguration,
                                                   ManagedBlockchain::Endpoint::ManagedBlockchainBuiltInParameters,
                                                   ManagedBlockchain::Endpoint::ManagedBlockchainClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ManagedBlockchain::Endpoint::ManagedBlockchainClientConfiguration,
                                                  ManagedBlockchain::Endpoint::ManagedBlockchainBuiltInParameters,
                                                  ManagedBlockchain::Endpoint::ManagedBlockchainClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ManagedBlockchain {
namespace Endpoint {
ManagedBlockchainEndpointProvider::ManagedBlockchainEndpointProvider()
    : ManagedBlockchainDefaultEpProviderBase(Aws::ManagedBlockchain::ManagedBlockchainEndpointRules::GetRulesBlob(),
                                             Aws::ManagedBlockchain::ManagedBlockchainEndpointRules::RulesBlobSize) {}

void ManagedBlockchainBuiltInParameters::SetFromClientConfiguration(const ManagedBlockchainClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ManagedBlockchainClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ManagedBlockchainBuiltInParameters::SetFromClientConfiguration(const ManagedBlockchainClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ManagedBlockchainClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ManagedBlockchainBuiltInParameters::SetServiceSpecificParameters(const ManagedBlockchainClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ManagedBlockchain
}  // namespace Aws
