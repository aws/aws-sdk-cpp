/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/SocialMessagingEndpointProvider.h>
#include <aws/socialmessaging/internal/SocialMessagingEndpointRules.h>

namespace Aws {
#ifndef AWS_SOCIALMESSAGING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SocialMessaging::Endpoint::SocialMessagingClientConfiguration,
                                                   SocialMessaging::Endpoint::SocialMessagingBuiltInParameters,
                                                   SocialMessaging::Endpoint::SocialMessagingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SocialMessaging::Endpoint::SocialMessagingClientConfiguration,
                                                  SocialMessaging::Endpoint::SocialMessagingBuiltInParameters,
                                                  SocialMessaging::Endpoint::SocialMessagingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SocialMessaging {
namespace Endpoint {
SocialMessagingEndpointProvider::SocialMessagingEndpointProvider()
    : SocialMessagingDefaultEpProviderBase(Aws::SocialMessaging::SocialMessagingEndpointRules::GetRulesBlob(),
                                           Aws::SocialMessaging::SocialMessagingEndpointRules::RulesBlobSize) {}

void SocialMessagingBuiltInParameters::SetFromClientConfiguration(const SocialMessagingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SocialMessagingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SocialMessagingBuiltInParameters::SetFromClientConfiguration(const SocialMessagingClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SocialMessagingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SocialMessagingBuiltInParameters::SetServiceSpecificParameters(const SocialMessagingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SocialMessaging
}  // namespace Aws
