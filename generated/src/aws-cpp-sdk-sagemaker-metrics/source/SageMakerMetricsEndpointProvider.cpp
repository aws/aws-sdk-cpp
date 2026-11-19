/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/SageMakerMetricsEndpointProvider.h>
#include <aws/sagemaker-metrics/internal/SageMakerMetricsEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERMETRICS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SageMakerMetrics::Endpoint::SageMakerMetricsClientConfiguration,
                                                   SageMakerMetrics::Endpoint::SageMakerMetricsBuiltInParameters,
                                                   SageMakerMetrics::Endpoint::SageMakerMetricsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SageMakerMetrics::Endpoint::SageMakerMetricsClientConfiguration,
                                                  SageMakerMetrics::Endpoint::SageMakerMetricsBuiltInParameters,
                                                  SageMakerMetrics::Endpoint::SageMakerMetricsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SageMakerMetrics {
namespace Endpoint {
SageMakerMetricsEndpointProvider::SageMakerMetricsEndpointProvider()
    : SageMakerMetricsDefaultEpProviderBase(Aws::SageMakerMetrics::SageMakerMetricsEndpointRules::GetRulesBlob(),
                                            Aws::SageMakerMetrics::SageMakerMetricsEndpointRules::RulesBlobSize) {}

void SageMakerMetricsBuiltInParameters::SetFromClientConfiguration(const SageMakerMetricsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SageMakerMetricsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SageMakerMetricsBuiltInParameters::SetFromClientConfiguration(const SageMakerMetricsClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SageMakerMetricsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SageMakerMetricsBuiltInParameters::SetServiceSpecificParameters(const SageMakerMetricsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SageMakerMetrics
}  // namespace Aws
