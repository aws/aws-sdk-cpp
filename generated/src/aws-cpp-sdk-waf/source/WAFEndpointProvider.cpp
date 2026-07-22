/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/WAFEndpointProvider.h>
#include <aws/waf/internal/WAFEndpointRules.h>

namespace Aws {
namespace WAF {
namespace Endpoint {
WAFEndpointProvider::WAFEndpointProvider()
    : WAFDefaultEpProviderBase(Aws::WAF::WAFEndpointRules::GetRulesBlob(), Aws::WAF::WAFEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WAF
}  // namespace Aws
