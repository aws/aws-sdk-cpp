/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-reporting/MarketplaceReportingEndpointProvider.h>
#include <aws/marketplace-reporting/internal/MarketplaceReportingEndpointRules.h>

namespace Aws {
namespace MarketplaceReporting {
namespace Endpoint {
MarketplaceReportingEndpointProvider::MarketplaceReportingEndpointProvider()
    : MarketplaceReportingDefaultEpProviderBase(Aws::MarketplaceReporting::MarketplaceReportingEndpointRules::GetRulesBlob(),
                                                Aws::MarketplaceReporting::MarketplaceReportingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceReporting
}  // namespace Aws
