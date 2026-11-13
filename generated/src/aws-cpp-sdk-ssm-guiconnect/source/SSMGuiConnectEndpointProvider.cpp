/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/SSMGuiConnectEndpointProvider.h>
#include <aws/ssm-guiconnect/internal/SSMGuiConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_SSMGUICONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSMGuiConnect::Endpoint::SSMGuiConnectClientConfiguration,
                                                   SSMGuiConnect::Endpoint::SSMGuiConnectBuiltInParameters,
                                                   SSMGuiConnect::Endpoint::SSMGuiConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSMGuiConnect::Endpoint::SSMGuiConnectClientConfiguration,
                                                  SSMGuiConnect::Endpoint::SSMGuiConnectBuiltInParameters,
                                                  SSMGuiConnect::Endpoint::SSMGuiConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSMGuiConnect {
namespace Endpoint {
SSMGuiConnectEndpointProvider::SSMGuiConnectEndpointProvider()
    : SSMGuiConnectDefaultEpProviderBase(Aws::SSMGuiConnect::SSMGuiConnectEndpointRules::GetRulesBlob(),
                                         Aws::SSMGuiConnect::SSMGuiConnectEndpointRules::RulesBlobSize) {}

void SSMGuiConnectBuiltInParameters::SetFromClientConfiguration(const SSMGuiConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSMGuiConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSMGuiConnectBuiltInParameters::SetFromClientConfiguration(const SSMGuiConnectClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSMGuiConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSMGuiConnectBuiltInParameters::SetServiceSpecificParameters(const SSMGuiConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSMGuiConnect
}  // namespace Aws
