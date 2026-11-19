/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/PcaConnectorScepEndpointProvider.h>
#include <aws/pca-connector-scep/internal/PcaConnectorScepEndpointRules.h>

namespace Aws {
#ifndef AWS_PCACONNECTORSCEP_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PcaConnectorScep::Endpoint::PcaConnectorScepClientConfiguration,
                                                   PcaConnectorScep::Endpoint::PcaConnectorScepBuiltInParameters,
                                                   PcaConnectorScep::Endpoint::PcaConnectorScepClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PcaConnectorScep::Endpoint::PcaConnectorScepClientConfiguration,
                                                  PcaConnectorScep::Endpoint::PcaConnectorScepBuiltInParameters,
                                                  PcaConnectorScep::Endpoint::PcaConnectorScepClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PcaConnectorScep {
namespace Endpoint {
PcaConnectorScepEndpointProvider::PcaConnectorScepEndpointProvider()
    : PcaConnectorScepDefaultEpProviderBase(Aws::PcaConnectorScep::PcaConnectorScepEndpointRules::GetRulesBlob(),
                                            Aws::PcaConnectorScep::PcaConnectorScepEndpointRules::RulesBlobSize) {}

void PcaConnectorScepBuiltInParameters::SetFromClientConfiguration(const PcaConnectorScepClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PcaConnectorScepClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PcaConnectorScepBuiltInParameters::SetFromClientConfiguration(const PcaConnectorScepClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PcaConnectorScepClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PcaConnectorScepBuiltInParameters::SetServiceSpecificParameters(const PcaConnectorScepClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PcaConnectorScep
}  // namespace Aws
