/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/ResilienceHubEndpointProvider.h>
#include <aws/resiliencehub/internal/ResilienceHubEndpointRules.h>

namespace Aws {
namespace ResilienceHub {
namespace Endpoint {
ResilienceHubEndpointProvider::ResilienceHubEndpointProvider()
    : ResilienceHubDefaultEpProviderBase(Aws::ResilienceHub::ResilienceHubEndpointRules::GetRulesBlob(),
                                         Aws::ResilienceHub::ResilienceHubEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ResilienceHub
}  // namespace Aws
