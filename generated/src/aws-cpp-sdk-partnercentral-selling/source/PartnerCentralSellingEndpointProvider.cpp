/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/PartnerCentralSellingEndpointProvider.h>
#include <aws/partnercentral-selling/internal/PartnerCentralSellingEndpointRules.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Endpoint {
PartnerCentralSellingEndpointProvider::PartnerCentralSellingEndpointProvider()
    : PartnerCentralSellingDefaultEpProviderBase(Aws::PartnerCentralSelling::PartnerCentralSellingEndpointRules::GetRulesBlob(),
                                                 Aws::PartnerCentralSelling::PartnerCentralSellingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PartnerCentralSelling
}  // namespace Aws
