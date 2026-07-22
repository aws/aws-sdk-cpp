/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
#include <aws/sagemaker-featurestore-runtime/internal/SageMakerFeatureStoreRuntimeEndpointRules.h>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Endpoint {
SageMakerFeatureStoreRuntimeEndpointProvider::SageMakerFeatureStoreRuntimeEndpointProvider()
    : SageMakerFeatureStoreRuntimeDefaultEpProviderBase(
          Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeEndpointRules::GetRulesBlob(),
          Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
