/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/WAFV2EndpointProvider.h>
#include <aws/wafv2/internal/WAFV2EndpointRules.h>

namespace Aws {
namespace WAFV2 {
namespace Endpoint {
WAFV2EndpointProvider::WAFV2EndpointProvider()
    : WAFV2DefaultEpProviderBase(Aws::WAFV2::WAFV2EndpointRules::GetRulesBlob(), Aws::WAFV2::WAFV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WAFV2
}  // namespace Aws
