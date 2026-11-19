/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointProvider.h>
#include <aws/sagemaker-runtime-http2/internal/SageMakerRuntimeHTTP2EndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERRUNTIMEHTTP2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientConfiguration,
                                                   SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2BuiltInParameters,
                                                   SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientConfiguration,
                                                  SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2BuiltInParameters,
                                                  SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMakerRuntimeHTTP2 {
namespace Endpoint {
SageMakerRuntimeHTTP2EndpointProvider::SageMakerRuntimeHTTP2EndpointProvider()
    : SageMakerRuntimeHTTP2DefaultEpProviderBase(Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2EndpointRules::GetRulesBlob(),
                                                 Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2EndpointRules::RulesBlobSize) {}

void SageMakerRuntimeHTTP2BuiltInParameters::SetFromClientConfiguration(const SageMakerRuntimeHTTP2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerRuntimeHTTP2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerRuntimeHTTP2BuiltInParameters::SetFromClientConfiguration(const SageMakerRuntimeHTTP2ClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerRuntimeHTTP2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerRuntimeHTTP2BuiltInParameters::SetServiceSpecificParameters(const SageMakerRuntimeHTTP2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
