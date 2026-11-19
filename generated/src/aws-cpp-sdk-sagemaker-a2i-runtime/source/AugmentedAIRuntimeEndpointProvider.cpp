/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointProvider.h>
#include <aws/sagemaker-a2i-runtime/internal/AugmentedAIRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_AUGMENTEDAIRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientConfiguration,
                                                   AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeBuiltInParameters,
                                                   AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientConfiguration,
                                                  AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeBuiltInParameters,
                                                  AugmentedAIRuntime::Endpoint::AugmentedAIRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AugmentedAIRuntime {
namespace Endpoint {
AugmentedAIRuntimeEndpointProvider::AugmentedAIRuntimeEndpointProvider()
    : AugmentedAIRuntimeDefaultEpProviderBase(Aws::AugmentedAIRuntime::AugmentedAIRuntimeEndpointRules::GetRulesBlob(),
                                              Aws::AugmentedAIRuntime::AugmentedAIRuntimeEndpointRules::RulesBlobSize) {}

void AugmentedAIRuntimeBuiltInParameters::SetFromClientConfiguration(const AugmentedAIRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AugmentedAIRuntimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AugmentedAIRuntimeBuiltInParameters::SetFromClientConfiguration(const AugmentedAIRuntimeClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AugmentedAIRuntimeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AugmentedAIRuntimeBuiltInParameters::SetServiceSpecificParameters(const AugmentedAIRuntimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AugmentedAIRuntime
}  // namespace Aws
