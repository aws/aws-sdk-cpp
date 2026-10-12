/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeEndpointProvider.h>
#include <aws/sagemakertrainingsessionruntime/internal/SageMakerTrainingSessionRuntimeEndpointRules.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Endpoint {
SageMakerTrainingSessionRuntimeEndpointProvider::SageMakerTrainingSessionRuntimeEndpointProvider()
    : SageMakerTrainingSessionRuntimeDefaultEpProviderBase(
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeEndpointRules::GetRulesBlob(),
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
