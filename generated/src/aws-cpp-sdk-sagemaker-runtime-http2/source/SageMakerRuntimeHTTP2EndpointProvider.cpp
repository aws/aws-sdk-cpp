/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointProvider.h>
#include <aws/sagemaker-runtime-http2/internal/SageMakerRuntimeHTTP2EndpointRules.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Endpoint {
SageMakerRuntimeHTTP2EndpointProvider::SageMakerRuntimeHTTP2EndpointProvider()
    : SageMakerRuntimeHTTP2DefaultEpProviderBase(Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2EndpointRules::GetRulesBlob(),
                                                 Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
