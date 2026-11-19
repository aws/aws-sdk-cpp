/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-marketing/PartnerCentralMarketingEndpointProvider.h>
#include <aws/partnercentral-marketing/internal/PartnerCentralMarketingEndpointRules.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Endpoint {
PartnerCentralMarketingEndpointProvider::PartnerCentralMarketingEndpointProvider()
    : PartnerCentralMarketingDefaultEpProviderBase(Aws::PartnerCentralMarketing::PartnerCentralMarketingEndpointRules::GetRulesBlob(),
                                                   Aws::PartnerCentralMarketing::PartnerCentralMarketingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PartnerCentralMarketing
}  // namespace Aws
