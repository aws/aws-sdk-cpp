/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointProvider.h>
#include <aws/sagemaker-runtime/internal/SageMakerRuntimeEndpointRules.h>

namespace Aws {
namespace SageMakerRuntime {
namespace Endpoint {
SageMakerRuntimeEndpointProvider::SageMakerRuntimeEndpointProvider()
    : SageMakerRuntimeDefaultEpProviderBase(Aws::SageMakerRuntime::SageMakerRuntimeEndpointRules::GetRulesBlob(),
                                            Aws::SageMakerRuntime::SageMakerRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerRuntime
}  // namespace Aws
