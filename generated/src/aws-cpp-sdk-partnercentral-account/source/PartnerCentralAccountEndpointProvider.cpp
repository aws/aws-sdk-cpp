/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-account/PartnerCentralAccountEndpointProvider.h>
#include <aws/partnercentral-account/internal/PartnerCentralAccountEndpointRules.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Endpoint {
PartnerCentralAccountEndpointProvider::PartnerCentralAccountEndpointProvider()
    : PartnerCentralAccountDefaultEpProviderBase(Aws::PartnerCentralAccount::PartnerCentralAccountEndpointRules::GetRulesBlob(),
                                                 Aws::PartnerCentralAccount::PartnerCentralAccountEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PartnerCentralAccount
}  // namespace Aws
