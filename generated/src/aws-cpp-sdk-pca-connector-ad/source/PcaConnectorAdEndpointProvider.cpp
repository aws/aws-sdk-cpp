/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/PcaConnectorAdEndpointProvider.h>
#include <aws/pca-connector-ad/internal/PcaConnectorAdEndpointRules.h>

namespace Aws {
#ifndef AWS_PCACONNECTORAD_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PcaConnectorAd::Endpoint::PcaConnectorAdClientConfiguration,
                                                   PcaConnectorAd::Endpoint::PcaConnectorAdBuiltInParameters,
                                                   PcaConnectorAd::Endpoint::PcaConnectorAdClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PcaConnectorAd::Endpoint::PcaConnectorAdClientConfiguration,
                                                  PcaConnectorAd::Endpoint::PcaConnectorAdBuiltInParameters,
                                                  PcaConnectorAd::Endpoint::PcaConnectorAdClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PcaConnectorAd {
namespace Endpoint {
PcaConnectorAdEndpointProvider::PcaConnectorAdEndpointProvider()
    : PcaConnectorAdDefaultEpProviderBase(Aws::PcaConnectorAd::PcaConnectorAdEndpointRules::GetRulesBlob(),
                                          Aws::PcaConnectorAd::PcaConnectorAdEndpointRules::RulesBlobSize) {}

void PcaConnectorAdBuiltInParameters::SetFromClientConfiguration(const PcaConnectorAdClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PcaConnectorAdClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PcaConnectorAdBuiltInParameters::SetFromClientConfiguration(const PcaConnectorAdClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PcaConnectorAdClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PcaConnectorAdBuiltInParameters::SetServiceSpecificParameters(const PcaConnectorAdClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PcaConnectorAd
}  // namespace Aws
