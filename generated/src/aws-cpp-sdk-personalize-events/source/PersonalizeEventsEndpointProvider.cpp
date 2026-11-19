/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/PersonalizeEventsEndpointProvider.h>
#include <aws/personalize-events/internal/PersonalizeEventsEndpointRules.h>

namespace Aws {
#ifndef AWS_PERSONALIZEEVENTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PersonalizeEvents::Endpoint::PersonalizeEventsClientConfiguration,
                                                   PersonalizeEvents::Endpoint::PersonalizeEventsBuiltInParameters,
                                                   PersonalizeEvents::Endpoint::PersonalizeEventsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PersonalizeEvents::Endpoint::PersonalizeEventsClientConfiguration,
                                                  PersonalizeEvents::Endpoint::PersonalizeEventsBuiltInParameters,
                                                  PersonalizeEvents::Endpoint::PersonalizeEventsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PersonalizeEvents {
namespace Endpoint {
PersonalizeEventsEndpointProvider::PersonalizeEventsEndpointProvider()
    : PersonalizeEventsDefaultEpProviderBase(Aws::PersonalizeEvents::PersonalizeEventsEndpointRules::GetRulesBlob(),
                                             Aws::PersonalizeEvents::PersonalizeEventsEndpointRules::RulesBlobSize) {}

void PersonalizeEventsBuiltInParameters::SetFromClientConfiguration(const PersonalizeEventsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PersonalizeEventsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PersonalizeEventsBuiltInParameters::SetFromClientConfiguration(const PersonalizeEventsClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PersonalizeEventsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PersonalizeEventsBuiltInParameters::SetServiceSpecificParameters(const PersonalizeEventsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PersonalizeEvents
}  // namespace Aws
