/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralMarketingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PartnerCentralMarketingClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralMarketingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PartnerCentralMarketing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralMarketingEndpointProviderBase =
    EndpointProviderBase<PartnerCentralMarketingClientConfiguration, PartnerCentralMarketingBuiltInParameters,
                         PartnerCentralMarketingClientContextParameters>;

using PartnerCentralMarketingDefaultEpProviderBase =
    BDDEndpointProvider<PartnerCentralMarketingClientConfiguration, PartnerCentralMarketingBuiltInParameters,
                        PartnerCentralMarketingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALMARKETING_API PartnerCentralMarketingEndpointProvider : public PartnerCentralMarketingDefaultEpProviderBase {
 public:
  using PartnerCentralMarketingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralMarketingEndpointProvider();

  ~PartnerCentralMarketingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralMarketing
}  // namespace Aws
