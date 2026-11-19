/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/OmicsEndpointProvider.h>
#include <aws/omics/internal/OmicsEndpointRules.h>

namespace Aws {
#ifndef AWS_OMICS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Omics::Endpoint::OmicsClientConfiguration, Omics::Endpoint::OmicsBuiltInParameters,
                                                   Omics::Endpoint::OmicsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Omics::Endpoint::OmicsClientConfiguration, Omics::Endpoint::OmicsBuiltInParameters,
                                                  Omics::Endpoint::OmicsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Omics {
namespace Endpoint {
OmicsEndpointProvider::OmicsEndpointProvider()
    : OmicsDefaultEpProviderBase(Aws::Omics::OmicsEndpointRules::GetRulesBlob(), Aws::Omics::OmicsEndpointRules::RulesBlobSize) {}

void OmicsBuiltInParameters::SetFromClientConfiguration(const OmicsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OmicsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OmicsBuiltInParameters::SetFromClientConfiguration(const OmicsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OmicsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OmicsBuiltInParameters::SetServiceSpecificParameters(const OmicsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Omics
}  // namespace Aws
