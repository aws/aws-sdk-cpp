/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <aws/sagemaker/internal/SageMakerEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SageMaker::Endpoint::SageMakerClientConfiguration,
                                                   SageMaker::Endpoint::SageMakerBuiltInParameters,
                                                   SageMaker::Endpoint::SageMakerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SageMaker::Endpoint::SageMakerClientConfiguration,
                                                  SageMaker::Endpoint::SageMakerBuiltInParameters,
                                                  SageMaker::Endpoint::SageMakerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMaker {
namespace Endpoint {
SageMakerEndpointProvider::SageMakerEndpointProvider()
    : SageMakerDefaultEpProviderBase(Aws::SageMaker::SageMakerEndpointRules::GetRulesBlob(),
                                     Aws::SageMaker::SageMakerEndpointRules::RulesBlobSize) {}

void SageMakerBuiltInParameters::SetFromClientConfiguration(const SageMakerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerBuiltInParameters::SetFromClientConfiguration(const SageMakerClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerBuiltInParameters::SetServiceSpecificParameters(const SageMakerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMaker
}  // namespace Aws
