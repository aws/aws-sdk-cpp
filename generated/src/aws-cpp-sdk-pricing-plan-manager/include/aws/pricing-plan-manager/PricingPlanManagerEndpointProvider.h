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
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

namespace Aws {
namespace PricingPlanManager {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PricingPlanManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PricingPlanManagerClientConfiguration = Aws::Client::GenericClientConfiguration;
using PricingPlanManagerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PricingPlanManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PricingPlanManagerEndpointProviderBase =
    EndpointProviderBase<PricingPlanManagerClientConfiguration, PricingPlanManagerBuiltInParameters,
                         PricingPlanManagerClientContextParameters>;

using PricingPlanManagerDefaultEpProviderBase =
    BDDEndpointProvider<PricingPlanManagerClientConfiguration, PricingPlanManagerBuiltInParameters,
                        PricingPlanManagerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PRICINGPLANMANAGER_API PricingPlanManagerEndpointProvider : public PricingPlanManagerDefaultEpProviderBase {
 public:
  using PricingPlanManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PricingPlanManagerEndpointProvider();

  ~PricingPlanManagerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PricingPlanManager
}  // namespace Aws
