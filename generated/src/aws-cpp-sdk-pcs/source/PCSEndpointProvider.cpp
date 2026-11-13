/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/PCSEndpointProvider.h>
#include <aws/pcs/internal/PCSEndpointRules.h>

namespace Aws {
#ifndef AWS_PCS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PCS::Endpoint::PCSClientConfiguration, PCS::Endpoint::PCSBuiltInParameters,
                                                   PCS::Endpoint::PCSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PCS::Endpoint::PCSClientConfiguration, PCS::Endpoint::PCSBuiltInParameters,
                                                  PCS::Endpoint::PCSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PCS {
namespace Endpoint {
PCSEndpointProvider::PCSEndpointProvider()
    : PCSDefaultEpProviderBase(Aws::PCS::PCSEndpointRules::GetRulesBlob(), Aws::PCS::PCSEndpointRules::RulesBlobSize) {}

void PCSBuiltInParameters::SetFromClientConfiguration(const PCSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PCSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PCSBuiltInParameters::SetFromClientConfiguration(const PCSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PCSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PCSBuiltInParameters::SetServiceSpecificParameters(const PCSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PCS
}  // namespace Aws
