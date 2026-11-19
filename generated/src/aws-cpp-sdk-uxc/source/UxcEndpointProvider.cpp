/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/uxc/UxcEndpointProvider.h>
#include <aws/uxc/internal/UxcEndpointRules.h>

namespace Aws {
#ifndef AWS_UXC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<uxc::Endpoint::UxcClientConfiguration, uxc::Endpoint::UxcBuiltInParameters,
                                                   uxc::Endpoint::UxcClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<uxc::Endpoint::UxcClientConfiguration, uxc::Endpoint::UxcBuiltInParameters,
                                                  uxc::Endpoint::UxcClientContextParameters>;
}  // namespace Endpoint
#endif

namespace uxc {
namespace Endpoint {
UxcEndpointProvider::UxcEndpointProvider()
    : UxcDefaultEpProviderBase(Aws::uxc::UxcEndpointRules::GetRulesBlob(), Aws::uxc::UxcEndpointRules::RulesBlobSize) {}

void UxcBuiltInParameters::SetFromClientConfiguration(const UxcClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const UxcClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void UxcBuiltInParameters::SetFromClientConfiguration(const UxcClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const UxcClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void UxcBuiltInParameters::SetServiceSpecificParameters(const UxcClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace uxc
}  // namespace Aws
