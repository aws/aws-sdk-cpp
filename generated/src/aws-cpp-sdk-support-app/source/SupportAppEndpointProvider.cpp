/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/SupportAppEndpointProvider.h>
#include <aws/support-app/internal/SupportAppEndpointRules.h>

namespace Aws {
#ifndef AWS_SUPPORTAPP_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SupportApp::Endpoint::SupportAppClientConfiguration,
                                                   SupportApp::Endpoint::SupportAppBuiltInParameters,
                                                   SupportApp::Endpoint::SupportAppClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SupportApp::Endpoint::SupportAppClientConfiguration,
                                                  SupportApp::Endpoint::SupportAppBuiltInParameters,
                                                  SupportApp::Endpoint::SupportAppClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SupportApp {
namespace Endpoint {
SupportAppEndpointProvider::SupportAppEndpointProvider()
    : SupportAppDefaultEpProviderBase(Aws::SupportApp::SupportAppEndpointRules::GetRulesBlob(),
                                      Aws::SupportApp::SupportAppEndpointRules::RulesBlobSize) {}

void SupportAppBuiltInParameters::SetFromClientConfiguration(const SupportAppClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SupportAppClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SupportAppBuiltInParameters::SetFromClientConfiguration(const SupportAppClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SupportAppClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SupportAppBuiltInParameters::SetServiceSpecificParameters(const SupportAppClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SupportApp
}  // namespace Aws
