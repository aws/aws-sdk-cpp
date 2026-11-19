/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/MWAAEndpointProvider.h>
#include <aws/mwaa/internal/MWAAEndpointRules.h>

namespace Aws {
#ifndef AWS_MWAA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MWAA::Endpoint::MWAAClientConfiguration, MWAA::Endpoint::MWAABuiltInParameters,
                                                   MWAA::Endpoint::MWAAClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MWAA::Endpoint::MWAAClientConfiguration, MWAA::Endpoint::MWAABuiltInParameters,
                                                  MWAA::Endpoint::MWAAClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MWAA {
namespace Endpoint {
MWAAEndpointProvider::MWAAEndpointProvider()
    : MWAADefaultEpProviderBase(Aws::MWAA::MWAAEndpointRules::GetRulesBlob(), Aws::MWAA::MWAAEndpointRules::RulesBlobSize) {}

void MWAABuiltInParameters::SetFromClientConfiguration(const MWAAClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MWAAClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MWAABuiltInParameters::SetFromClientConfiguration(const MWAAClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MWAAClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MWAABuiltInParameters::SetServiceSpecificParameters(const MWAAClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MWAA
}  // namespace Aws
