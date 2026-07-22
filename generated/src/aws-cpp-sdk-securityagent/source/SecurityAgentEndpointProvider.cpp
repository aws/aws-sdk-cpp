/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityagent/SecurityAgentEndpointProvider.h>
#include <aws/securityagent/internal/SecurityAgentEndpointRules.h>

namespace Aws {
namespace SecurityAgent {
namespace Endpoint {
SecurityAgentEndpointProvider::SecurityAgentEndpointProvider()
    : SecurityAgentDefaultEpProviderBase(Aws::SecurityAgent::SecurityAgentEndpointRules::GetRulesBlob(),
                                         Aws::SecurityAgent::SecurityAgentEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SecurityAgent
}  // namespace Aws
