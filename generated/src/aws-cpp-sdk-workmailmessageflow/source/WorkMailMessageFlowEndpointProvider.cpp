/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointProvider.h>
#include <aws/workmailmessageflow/internal/WorkMailMessageFlowEndpointRules.h>

namespace Aws {
namespace WorkMailMessageFlow {
namespace Endpoint {
WorkMailMessageFlowEndpointProvider::WorkMailMessageFlowEndpointProvider()
    : WorkMailMessageFlowDefaultEpProviderBase(Aws::WorkMailMessageFlow::WorkMailMessageFlowEndpointRules::GetRulesBlob(),
                                               Aws::WorkMailMessageFlow::WorkMailMessageFlowEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkMailMessageFlow
}  // namespace Aws
