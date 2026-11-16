/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeEndpointProvider.h>
#include <aws/sagemaker-inference-router-runtime/internal/SageMakerInferenceRouterRuntimeEndpointRules.h>

namespace Aws {
namespace SageMakerInferenceRouterRuntime {
namespace Endpoint {
SageMakerInferenceRouterRuntimeEndpointProvider::SageMakerInferenceRouterRuntimeEndpointProvider()
    : SageMakerInferenceRouterRuntimeDefaultEpProviderBase(
          Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeEndpointRules::GetRulesBlob(),
          Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
