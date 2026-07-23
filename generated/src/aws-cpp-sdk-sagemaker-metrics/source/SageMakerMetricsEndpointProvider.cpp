/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/SageMakerMetricsEndpointProvider.h>
#include <aws/sagemaker-metrics/internal/SageMakerMetricsEndpointRules.h>

namespace Aws {
namespace SageMakerMetrics {
namespace Endpoint {
SageMakerMetricsEndpointProvider::SageMakerMetricsEndpointProvider()
    : SageMakerMetricsDefaultEpProviderBase(Aws::SageMakerMetrics::SageMakerMetricsEndpointRules::GetRulesBlob(),
                                            Aws::SageMakerMetrics::SageMakerMetricsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerMetrics
}  // namespace Aws
