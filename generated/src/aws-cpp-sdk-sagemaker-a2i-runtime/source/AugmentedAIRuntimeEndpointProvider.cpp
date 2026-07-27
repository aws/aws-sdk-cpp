/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointProvider.h>
#include <aws/sagemaker-a2i-runtime/internal/AugmentedAIRuntimeEndpointRules.h>

namespace Aws {
namespace AugmentedAIRuntime {
namespace Endpoint {
AugmentedAIRuntimeEndpointProvider::AugmentedAIRuntimeEndpointProvider()
    : AugmentedAIRuntimeDefaultEpProviderBase(Aws::AugmentedAIRuntime::AugmentedAIRuntimeEndpointRules::GetRulesBlob(),
                                              Aws::AugmentedAIRuntime::AugmentedAIRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AugmentedAIRuntime
}  // namespace Aws
