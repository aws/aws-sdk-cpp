/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/TrustedAdvisorEndpointProvider.h>
#include <aws/trustedadvisor/internal/TrustedAdvisorEndpointRules.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Endpoint {
TrustedAdvisorEndpointProvider::TrustedAdvisorEndpointProvider()
    : TrustedAdvisorDefaultEpProviderBase(Aws::TrustedAdvisor::TrustedAdvisorEndpointRules::GetRulesBlob(),
                                          Aws::TrustedAdvisor::TrustedAdvisorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace TrustedAdvisor
}  // namespace Aws
