/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeEndpointProvider.h>
#include <aws/sagemakertrainingsessionruntime/internal/SageMakerTrainingSessionRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERTRAININGSESSIONRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeClientConfiguration,
    SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeBuiltInParameters,
    SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeClientConfiguration,
    SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeBuiltInParameters,
    SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMakerTrainingSessionRuntime {
namespace Endpoint {
SageMakerTrainingSessionRuntimeEndpointProvider::SageMakerTrainingSessionRuntimeEndpointProvider()
    : SageMakerTrainingSessionRuntimeDefaultEpProviderBase(
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeEndpointRules::GetRulesBlob(),
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeEndpointRules::RulesBlobSize) {}

void SageMakerTrainingSessionRuntimeBuiltInParameters::SetFromClientConfiguration(
    const SageMakerTrainingSessionRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerTrainingSessionRuntimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerTrainingSessionRuntimeBuiltInParameters::SetFromClientConfiguration(
    const SageMakerTrainingSessionRuntimeClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerTrainingSessionRuntimeClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerTrainingSessionRuntimeBuiltInParameters::SetServiceSpecificParameters(
    const SageMakerTrainingSessionRuntimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
