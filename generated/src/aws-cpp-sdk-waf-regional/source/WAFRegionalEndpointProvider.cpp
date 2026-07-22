/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/WAFRegionalEndpointProvider.h>
#include <aws/waf-regional/internal/WAFRegionalEndpointRules.h>

namespace Aws {
namespace WAFRegional {
namespace Endpoint {
WAFRegionalEndpointProvider::WAFRegionalEndpointProvider()
    : WAFRegionalDefaultEpProviderBase(Aws::WAFRegional::WAFRegionalEndpointRules::GetRulesBlob(),
                                       Aws::WAFRegional::WAFRegionalEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WAFRegional
}  // namespace Aws
