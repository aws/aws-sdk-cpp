/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <aws/sagemaker/internal/SageMakerEndpointRules.h>

namespace Aws {
namespace SageMaker {
namespace Endpoint {
SageMakerEndpointProvider::SageMakerEndpointProvider()
    : SageMakerDefaultEpProviderBase(Aws::SageMaker::SageMakerEndpointRules::GetRulesBlob(),
                                     Aws::SageMaker::SageMakerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMaker
}  // namespace Aws
