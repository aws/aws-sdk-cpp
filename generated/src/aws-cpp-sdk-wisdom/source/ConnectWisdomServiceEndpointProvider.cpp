/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/ConnectWisdomServiceEndpointProvider.h>
#include <aws/wisdom/internal/ConnectWisdomServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTWISDOMSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectWisdomService::Endpoint::ConnectWisdomServiceClientConfiguration,
                                                   ConnectWisdomService::Endpoint::ConnectWisdomServiceBuiltInParameters,
                                                   ConnectWisdomService::Endpoint::ConnectWisdomServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectWisdomService::Endpoint::ConnectWisdomServiceClientConfiguration,
                                                  ConnectWisdomService::Endpoint::ConnectWisdomServiceBuiltInParameters,
                                                  ConnectWisdomService::Endpoint::ConnectWisdomServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectWisdomService {
namespace Endpoint {
ConnectWisdomServiceEndpointProvider::ConnectWisdomServiceEndpointProvider()
    : ConnectWisdomServiceDefaultEpProviderBase(Aws::ConnectWisdomService::ConnectWisdomServiceEndpointRules::GetRulesBlob(),
                                                Aws::ConnectWisdomService::ConnectWisdomServiceEndpointRules::RulesBlobSize) {}

void ConnectWisdomServiceBuiltInParameters::SetFromClientConfiguration(const ConnectWisdomServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectWisdomServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectWisdomServiceBuiltInParameters::SetFromClientConfiguration(const ConnectWisdomServiceClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectWisdomServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectWisdomServiceBuiltInParameters::SetServiceSpecificParameters(const ConnectWisdomServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectWisdomService
}  // namespace Aws
