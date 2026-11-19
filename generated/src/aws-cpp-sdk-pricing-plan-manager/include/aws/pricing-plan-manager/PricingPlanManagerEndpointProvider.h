/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pricing-plan-manager/PricingPlanManagerClientConfiguration.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

namespace Aws {
namespace PricingPlanManager {
namespace Endpoint {
using PricingPlanManagerClientConfiguration = Aws::PricingPlanManager::PricingPlanManagerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PricingPlanManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PRICINGPLANMANAGER_API PricingPlanManagerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PricingPlanManagerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PricingPlanManagerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PricingPlanManagerClientConfiguration& config, const Aws::String& serviceName);
};

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

}  // namespace Endpoint
}  // namespace PricingPlanManager

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PRICINGPLANMANAGER_EXTERN template class AWS_PRICINGPLANMANAGER_API Aws::Endpoint::EndpointProviderBase<
    PricingPlanManager::Endpoint::PricingPlanManagerClientConfiguration, PricingPlanManager::Endpoint::PricingPlanManagerBuiltInParameters,
    PricingPlanManager::Endpoint::PricingPlanManagerClientContextParameters>;

AWS_PRICINGPLANMANAGER_EXTERN template class AWS_PRICINGPLANMANAGER_API Aws::Endpoint::BDDEndpointProvider<
    PricingPlanManager::Endpoint::PricingPlanManagerClientConfiguration, PricingPlanManager::Endpoint::PricingPlanManagerBuiltInParameters,
    PricingPlanManager::Endpoint::PricingPlanManagerClientContextParameters>;
}  // namespace Endpoint

namespace PricingPlanManager {
namespace Endpoint {
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
