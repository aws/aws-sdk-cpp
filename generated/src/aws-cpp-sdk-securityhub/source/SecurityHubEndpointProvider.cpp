/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/SecurityHubEndpointProvider.h>
#include <aws/securityhub/internal/SecurityHubEndpointRules.h>

namespace Aws {
namespace SecurityHub {
namespace Endpoint {
SecurityHubEndpointProvider::SecurityHubEndpointProvider()
    : SecurityHubDefaultEpProviderBase(Aws::SecurityHub::SecurityHubEndpointRules::GetRulesBlob(),
                                       Aws::SecurityHub::SecurityHubEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SecurityHub
}  // namespace Aws
