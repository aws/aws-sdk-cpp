/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointRules.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralBenefitsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PartnerCentralBenefitsClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralBenefitsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PartnerCentralBenefits Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralBenefitsEndpointProviderBase =
    EndpointProviderBase<PartnerCentralBenefitsClientConfiguration, PartnerCentralBenefitsBuiltInParameters,
                         PartnerCentralBenefitsClientContextParameters>;

using PartnerCentralBenefitsDefaultEpProviderBase =
    DefaultEndpointProvider<PartnerCentralBenefitsClientConfiguration, PartnerCentralBenefitsBuiltInParameters,
                            PartnerCentralBenefitsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALBENEFITS_API PartnerCentralBenefitsEndpointProvider : public PartnerCentralBenefitsDefaultEpProviderBase {
 public:
  using PartnerCentralBenefitsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralBenefitsEndpointProvider()
      : PartnerCentralBenefitsDefaultEpProviderBase(Aws::PartnerCentralBenefits::PartnerCentralBenefitsEndpointRules::GetRulesBlob(),
                                                    Aws::PartnerCentralBenefits::PartnerCentralBenefitsEndpointRules::RulesBlobSize) {}

  ~PartnerCentralBenefitsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralBenefits
}  // namespace Aws
