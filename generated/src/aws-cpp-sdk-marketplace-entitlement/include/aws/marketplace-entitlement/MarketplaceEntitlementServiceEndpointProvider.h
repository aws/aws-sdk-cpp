/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClientConfiguration.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>

namespace Aws {
namespace MarketplaceEntitlementService {
namespace Endpoint {
using MarketplaceEntitlementServiceClientConfiguration =
    Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceEntitlementServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACEENTITLEMENTSERVICE_API MarketplaceEntitlementServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceEntitlementServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceEntitlementServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceEntitlementServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceEntitlementServiceClientConfiguration& config);
};

/**
 * The type for the MarketplaceEntitlementService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceEntitlementServiceEndpointProviderBase =
    EndpointProviderBase<MarketplaceEntitlementServiceClientConfiguration, MarketplaceEntitlementServiceBuiltInParameters,
                         MarketplaceEntitlementServiceClientContextParameters>;

using MarketplaceEntitlementServiceDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceEntitlementServiceClientConfiguration, MarketplaceEntitlementServiceBuiltInParameters,
                        MarketplaceEntitlementServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceEntitlementService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACEENTITLEMENTSERVICE_EXTERN template class AWS_MARKETPLACEENTITLEMENTSERVICE_API
    Aws::Endpoint::EndpointProviderBase<MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientConfiguration,
                                        MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceBuiltInParameters,
                                        MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientContextParameters>;

AWS_MARKETPLACEENTITLEMENTSERVICE_EXTERN template class AWS_MARKETPLACEENTITLEMENTSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientConfiguration,
                                       MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceBuiltInParameters,
                                       MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceEntitlementService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEENTITLEMENTSERVICE_API MarketplaceEntitlementServiceEndpointProvider
    : public MarketplaceEntitlementServiceDefaultEpProviderBase {
 public:
  using MarketplaceEntitlementServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceEntitlementServiceEndpointProvider();

  ~MarketplaceEntitlementServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
