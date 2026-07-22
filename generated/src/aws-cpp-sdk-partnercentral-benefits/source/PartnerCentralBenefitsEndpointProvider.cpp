/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointProvider.h>
#include <aws/partnercentral-benefits/internal/PartnerCentralBenefitsEndpointRules.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Endpoint {
PartnerCentralBenefitsEndpointProvider::PartnerCentralBenefitsEndpointProvider()
    : PartnerCentralBenefitsDefaultEpProviderBase(Aws::PartnerCentralBenefits::PartnerCentralBenefitsEndpointRules::GetRulesBlob(),
                                                  Aws::PartnerCentralBenefits::PartnerCentralBenefitsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PartnerCentralBenefits
}  // namespace Aws
