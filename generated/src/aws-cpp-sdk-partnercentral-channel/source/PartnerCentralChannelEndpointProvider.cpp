/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-channel/PartnerCentralChannelEndpointProvider.h>
#include <aws/partnercentral-channel/internal/PartnerCentralChannelEndpointRules.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Endpoint {
PartnerCentralChannelEndpointProvider::PartnerCentralChannelEndpointProvider()
    : PartnerCentralChannelDefaultEpProviderBase(Aws::PartnerCentralChannel::PartnerCentralChannelEndpointRules::GetRulesBlob(),
                                                 Aws::PartnerCentralChannel::PartnerCentralChannelEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PartnerCentralChannel
}  // namespace Aws
