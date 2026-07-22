/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointProvider.h>
#include <aws/sagemaker-edge/internal/SagemakerEdgeManagerEndpointRules.h>

namespace Aws {
namespace SagemakerEdgeManager {
namespace Endpoint {
SagemakerEdgeManagerEndpointProvider::SagemakerEdgeManagerEndpointProvider()
    : SagemakerEdgeManagerDefaultEpProviderBase(Aws::SagemakerEdgeManager::SagemakerEdgeManagerEndpointRules::GetRulesBlob(),
                                                Aws::SagemakerEdgeManager::SagemakerEdgeManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SagemakerEdgeManager
}  // namespace Aws
