/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/RTBFabricEndpointProvider.h>
#include <aws/rtbfabric/internal/RTBFabricEndpointRules.h>

namespace Aws {
#ifndef AWS_RTBFABRIC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RTBFabric::Endpoint::RTBFabricClientConfiguration,
                                                   RTBFabric::Endpoint::RTBFabricBuiltInParameters,
                                                   RTBFabric::Endpoint::RTBFabricClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RTBFabric::Endpoint::RTBFabricClientConfiguration,
                                                  RTBFabric::Endpoint::RTBFabricBuiltInParameters,
                                                  RTBFabric::Endpoint::RTBFabricClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RTBFabric {
namespace Endpoint {
RTBFabricEndpointProvider::RTBFabricEndpointProvider()
    : RTBFabricDefaultEpProviderBase(Aws::RTBFabric::RTBFabricEndpointRules::GetRulesBlob(),
                                     Aws::RTBFabric::RTBFabricEndpointRules::RulesBlobSize) {}

void RTBFabricBuiltInParameters::SetFromClientConfiguration(const RTBFabricClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RTBFabricClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RTBFabricBuiltInParameters::SetFromClientConfiguration(const RTBFabricClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RTBFabricClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RTBFabricBuiltInParameters::SetServiceSpecificParameters(const RTBFabricClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RTBFabric
}  // namespace Aws
