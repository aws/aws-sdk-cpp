/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/PersonalizeEndpointProvider.h>
#include <aws/personalize/internal/PersonalizeEndpointRules.h>

namespace Aws {
#ifndef AWS_PERSONALIZE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Personalize::Endpoint::PersonalizeClientConfiguration,
                                                   Personalize::Endpoint::PersonalizeBuiltInParameters,
                                                   Personalize::Endpoint::PersonalizeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Personalize::Endpoint::PersonalizeClientConfiguration,
                                                  Personalize::Endpoint::PersonalizeBuiltInParameters,
                                                  Personalize::Endpoint::PersonalizeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Personalize {
namespace Endpoint {
PersonalizeEndpointProvider::PersonalizeEndpointProvider()
    : PersonalizeDefaultEpProviderBase(Aws::Personalize::PersonalizeEndpointRules::GetRulesBlob(),
                                       Aws::Personalize::PersonalizeEndpointRules::RulesBlobSize) {}

void PersonalizeBuiltInParameters::SetFromClientConfiguration(const PersonalizeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PersonalizeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PersonalizeBuiltInParameters::SetFromClientConfiguration(const PersonalizeClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PersonalizeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PersonalizeBuiltInParameters::SetServiceSpecificParameters(const PersonalizeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Personalize
}  // namespace Aws
