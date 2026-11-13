/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supportauthz/SupportAuthZEndpointProvider.h>
#include <aws/supportauthz/internal/SupportAuthZEndpointRules.h>

namespace Aws {
#ifndef AWS_SUPPORTAUTHZ_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SupportAuthZ::Endpoint::SupportAuthZClientConfiguration,
                                                   SupportAuthZ::Endpoint::SupportAuthZBuiltInParameters,
                                                   SupportAuthZ::Endpoint::SupportAuthZClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SupportAuthZ::Endpoint::SupportAuthZClientConfiguration,
                                                  SupportAuthZ::Endpoint::SupportAuthZBuiltInParameters,
                                                  SupportAuthZ::Endpoint::SupportAuthZClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SupportAuthZ {
namespace Endpoint {
SupportAuthZEndpointProvider::SupportAuthZEndpointProvider()
    : SupportAuthZDefaultEpProviderBase(Aws::SupportAuthZ::SupportAuthZEndpointRules::GetRulesBlob(),
                                        Aws::SupportAuthZ::SupportAuthZEndpointRules::RulesBlobSize) {}

void SupportAuthZBuiltInParameters::SetFromClientConfiguration(const SupportAuthZClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SupportAuthZClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SupportAuthZBuiltInParameters::SetFromClientConfiguration(const SupportAuthZClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SupportAuthZClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SupportAuthZBuiltInParameters::SetServiceSpecificParameters(const SupportAuthZClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace SupportAuthZ
}  // namespace Aws
