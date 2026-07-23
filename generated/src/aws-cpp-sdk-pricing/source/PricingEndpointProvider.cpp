/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/PricingEndpointProvider.h>
#include <aws/pricing/internal/PricingEndpointRules.h>

namespace Aws {
namespace Pricing {
namespace Endpoint {
PricingEndpointProvider::PricingEndpointProvider()
    : PricingDefaultEpProviderBase(Aws::Pricing::PricingEndpointRules::GetRulesBlob(), Aws::Pricing::PricingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Pricing
}  // namespace Aws
