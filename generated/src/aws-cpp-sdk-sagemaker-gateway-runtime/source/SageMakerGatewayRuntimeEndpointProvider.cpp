/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeEndpointProvider.h>
#include <aws/sagemaker-gateway-runtime/internal/SageMakerGatewayRuntimeEndpointRules.h>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Endpoint {
SageMakerGatewayRuntimeEndpointProvider::SageMakerGatewayRuntimeEndpointProvider()
    : SageMakerGatewayRuntimeDefaultEpProviderBase(Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeEndpointRules::GetRulesBlob(),
                                                   Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
