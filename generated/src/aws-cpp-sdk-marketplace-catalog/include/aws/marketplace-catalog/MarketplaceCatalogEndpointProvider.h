/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalogClientConfiguration.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Endpoint {
using MarketplaceCatalogClientConfiguration = Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACECATALOG_API MarketplaceCatalogBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceCatalogBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceCatalogClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceCatalogClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceCatalogClientConfiguration& config);
};

/**
 * The type for the MarketplaceCatalog Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceCatalogEndpointProviderBase =
    EndpointProviderBase<MarketplaceCatalogClientConfiguration, MarketplaceCatalogBuiltInParameters,
                         MarketplaceCatalogClientContextParameters>;

using MarketplaceCatalogDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceCatalogClientConfiguration, MarketplaceCatalogBuiltInParameters,
                        MarketplaceCatalogClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceCatalog

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACECATALOG_EXTERN template class AWS_MARKETPLACECATALOG_API Aws::Endpoint::EndpointProviderBase<
    MarketplaceCatalog::Endpoint::MarketplaceCatalogClientConfiguration, MarketplaceCatalog::Endpoint::MarketplaceCatalogBuiltInParameters,
    MarketplaceCatalog::Endpoint::MarketplaceCatalogClientContextParameters>;

AWS_MARKETPLACECATALOG_EXTERN template class AWS_MARKETPLACECATALOG_API Aws::Endpoint::BDDEndpointProvider<
    MarketplaceCatalog::Endpoint::MarketplaceCatalogClientConfiguration, MarketplaceCatalog::Endpoint::MarketplaceCatalogBuiltInParameters,
    MarketplaceCatalog::Endpoint::MarketplaceCatalogClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceCatalog {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACECATALOG_API MarketplaceCatalogEndpointProvider : public MarketplaceCatalogDefaultEpProviderBase {
 public:
  using MarketplaceCatalogResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceCatalogEndpointProvider();

  ~MarketplaceCatalogEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceCatalog
}  // namespace Aws
