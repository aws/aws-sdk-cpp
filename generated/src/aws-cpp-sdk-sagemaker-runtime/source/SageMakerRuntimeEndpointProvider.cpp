/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointProvider.h>
#include <aws/sagemaker-runtime/internal/SageMakerRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SageMakerRuntime::Endpoint::SageMakerRuntimeClientConfiguration,
                                                   SageMakerRuntime::Endpoint::SageMakerRuntimeBuiltInParameters,
                                                   SageMakerRuntime::Endpoint::SageMakerRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SageMakerRuntime::Endpoint::SageMakerRuntimeClientConfiguration,
                                                  SageMakerRuntime::Endpoint::SageMakerRuntimeBuiltInParameters,
                                                  SageMakerRuntime::Endpoint::SageMakerRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMakerRuntime {
namespace Endpoint {
SageMakerRuntimeEndpointProvider::SageMakerRuntimeEndpointProvider()
    : SageMakerRuntimeDefaultEpProviderBase(Aws::SageMakerRuntime::SageMakerRuntimeEndpointRules::GetRulesBlob(),
                                            Aws::SageMakerRuntime::SageMakerRuntimeEndpointRules::RulesBlobSize) {}

void SageMakerRuntimeBuiltInParameters::SetFromClientConfiguration(const SageMakerRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerRuntimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerRuntimeBuiltInParameters::SetFromClientConfiguration(const SageMakerRuntimeClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerRuntimeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerRuntimeBuiltInParameters::SetServiceSpecificParameters(const SageMakerRuntimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMakerRuntime
}  // namespace Aws
