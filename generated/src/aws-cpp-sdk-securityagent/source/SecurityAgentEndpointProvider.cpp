/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityagent/SecurityAgentEndpointProvider.h>
#include <aws/securityagent/internal/SecurityAgentEndpointRules.h>

namespace Aws {
#ifndef AWS_SECURITYAGENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SecurityAgent::Endpoint::SecurityAgentClientConfiguration,
                                                   SecurityAgent::Endpoint::SecurityAgentBuiltInParameters,
                                                   SecurityAgent::Endpoint::SecurityAgentClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SecurityAgent::Endpoint::SecurityAgentClientConfiguration,
                                                  SecurityAgent::Endpoint::SecurityAgentBuiltInParameters,
                                                  SecurityAgent::Endpoint::SecurityAgentClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SecurityAgent {
namespace Endpoint {
SecurityAgentEndpointProvider::SecurityAgentEndpointProvider()
    : SecurityAgentDefaultEpProviderBase(Aws::SecurityAgent::SecurityAgentEndpointRules::GetRulesBlob(),
                                         Aws::SecurityAgent::SecurityAgentEndpointRules::RulesBlobSize) {}

void SecurityAgentBuiltInParameters::SetFromClientConfiguration(const SecurityAgentClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SecurityAgentClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SecurityAgentBuiltInParameters::SetFromClientConfiguration(const SecurityAgentClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SecurityAgentClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SecurityAgentBuiltInParameters::SetServiceSpecificParameters(const SecurityAgentClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace SecurityAgent
}  // namespace Aws
