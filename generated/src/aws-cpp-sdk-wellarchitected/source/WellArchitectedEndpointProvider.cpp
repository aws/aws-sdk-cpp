/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/WellArchitectedEndpointProvider.h>
#include <aws/wellarchitected/internal/WellArchitectedEndpointRules.h>

namespace Aws {
#ifndef AWS_WELLARCHITECTED_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WellArchitected::Endpoint::WellArchitectedClientConfiguration,
                                                   WellArchitected::Endpoint::WellArchitectedBuiltInParameters,
                                                   WellArchitected::Endpoint::WellArchitectedClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WellArchitected::Endpoint::WellArchitectedClientConfiguration,
                                                  WellArchitected::Endpoint::WellArchitectedBuiltInParameters,
                                                  WellArchitected::Endpoint::WellArchitectedClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WellArchitected {
namespace Endpoint {
WellArchitectedEndpointProvider::WellArchitectedEndpointProvider()
    : WellArchitectedDefaultEpProviderBase(Aws::WellArchitected::WellArchitectedEndpointRules::GetRulesBlob(),
                                           Aws::WellArchitected::WellArchitectedEndpointRules::RulesBlobSize) {}

void WellArchitectedBuiltInParameters::SetFromClientConfiguration(const WellArchitectedClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WellArchitectedClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WellArchitectedBuiltInParameters::SetFromClientConfiguration(const WellArchitectedClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WellArchitectedClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WellArchitectedBuiltInParameters::SetServiceSpecificParameters(const WellArchitectedClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WellArchitected
}  // namespace Aws
