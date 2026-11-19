/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
#include <aws/sagemaker-featurestore-runtime/internal/SageMakerFeatureStoreRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERFEATURESTORERUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientConfiguration,
    SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeBuiltInParameters,
    SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientConfiguration,
    SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeBuiltInParameters,
    SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMakerFeatureStoreRuntime {
namespace Endpoint {
SageMakerFeatureStoreRuntimeEndpointProvider::SageMakerFeatureStoreRuntimeEndpointProvider()
    : SageMakerFeatureStoreRuntimeDefaultEpProviderBase(
          Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeEndpointRules::GetRulesBlob(),
          Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeEndpointRules::RulesBlobSize) {}

void SageMakerFeatureStoreRuntimeBuiltInParameters::SetFromClientConfiguration(
    const SageMakerFeatureStoreRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerFeatureStoreRuntimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerFeatureStoreRuntimeBuiltInParameters::SetFromClientConfiguration(
    const SageMakerFeatureStoreRuntimeClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerFeatureStoreRuntimeClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerFeatureStoreRuntimeBuiltInParameters::SetServiceSpecificParameters(
    const SageMakerFeatureStoreRuntimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
