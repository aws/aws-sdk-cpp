/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemakerjobruntime/SagemakerJobRuntimeEndpointProvider.h>
#include <aws/sagemakerjobruntime/internal/SagemakerJobRuntimeEndpointRules.h>

namespace Aws {
namespace SagemakerJobRuntime {
namespace Endpoint {
SagemakerJobRuntimeEndpointProvider::SagemakerJobRuntimeEndpointProvider()
    : SagemakerJobRuntimeDefaultEpProviderBase(Aws::SagemakerJobRuntime::SagemakerJobRuntimeEndpointRules::GetRulesBlob(),
                                               Aws::SagemakerJobRuntime::SagemakerJobRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SagemakerJobRuntime
}  // namespace Aws
