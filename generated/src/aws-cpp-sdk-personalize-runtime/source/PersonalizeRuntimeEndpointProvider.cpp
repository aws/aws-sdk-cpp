/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/PersonalizeRuntimeEndpointProvider.h>
#include <aws/personalize-runtime/internal/PersonalizeRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_PERSONALIZERUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientConfiguration,
                                                   PersonalizeRuntime::Endpoint::PersonalizeRuntimeBuiltInParameters,
                                                   PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientConfiguration,
                                                  PersonalizeRuntime::Endpoint::PersonalizeRuntimeBuiltInParameters,
                                                  PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PersonalizeRuntime {
namespace Endpoint {
PersonalizeRuntimeEndpointProvider::PersonalizeRuntimeEndpointProvider()
    : PersonalizeRuntimeDefaultEpProviderBase(Aws::PersonalizeRuntime::PersonalizeRuntimeEndpointRules::GetRulesBlob(),
                                              Aws::PersonalizeRuntime::PersonalizeRuntimeEndpointRules::RulesBlobSize) {}

void PersonalizeRuntimeBuiltInParameters::SetFromClientConfiguration(const PersonalizeRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PersonalizeRuntimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PersonalizeRuntimeBuiltInParameters::SetFromClientConfiguration(const PersonalizeRuntimeClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PersonalizeRuntimeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PersonalizeRuntimeBuiltInParameters::SetServiceSpecificParameters(const PersonalizeRuntimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PersonalizeRuntime
}  // namespace Aws
