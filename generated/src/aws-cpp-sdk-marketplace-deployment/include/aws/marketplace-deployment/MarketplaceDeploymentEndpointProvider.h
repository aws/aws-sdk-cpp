/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentClientConfiguration.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>

namespace Aws {
namespace MarketplaceDeployment {
namespace Endpoint {
using MarketplaceDeploymentClientConfiguration = Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceDeploymentClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACEDEPLOYMENT_API MarketplaceDeploymentBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceDeploymentBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceDeploymentClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceDeploymentClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceDeploymentClientConfiguration& config);
};

/**
 * The type for the MarketplaceDeployment Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceDeploymentEndpointProviderBase =
    EndpointProviderBase<MarketplaceDeploymentClientConfiguration, MarketplaceDeploymentBuiltInParameters,
                         MarketplaceDeploymentClientContextParameters>;

using MarketplaceDeploymentDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceDeploymentClientConfiguration, MarketplaceDeploymentBuiltInParameters,
                        MarketplaceDeploymentClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceDeployment

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACEDEPLOYMENT_EXTERN template class AWS_MARKETPLACEDEPLOYMENT_API
    Aws::Endpoint::EndpointProviderBase<MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientConfiguration,
                                        MarketplaceDeployment::Endpoint::MarketplaceDeploymentBuiltInParameters,
                                        MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientContextParameters>;

AWS_MARKETPLACEDEPLOYMENT_EXTERN template class AWS_MARKETPLACEDEPLOYMENT_API
    Aws::Endpoint::BDDEndpointProvider<MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientConfiguration,
                                       MarketplaceDeployment::Endpoint::MarketplaceDeploymentBuiltInParameters,
                                       MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceDeployment {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEDEPLOYMENT_API MarketplaceDeploymentEndpointProvider : public MarketplaceDeploymentDefaultEpProviderBase {
 public:
  using MarketplaceDeploymentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceDeploymentEndpointProvider();

  ~MarketplaceDeploymentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceDeployment
}  // namespace Aws
