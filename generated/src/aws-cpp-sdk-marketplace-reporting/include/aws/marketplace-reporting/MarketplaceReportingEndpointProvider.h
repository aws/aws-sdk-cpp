/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-reporting/MarketplaceReportingClientConfiguration.h>
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>

namespace Aws {
namespace MarketplaceReporting {
namespace Endpoint {
using MarketplaceReportingClientConfiguration = Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceReportingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACEREPORTING_API MarketplaceReportingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceReportingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceReportingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceReportingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceReportingClientConfiguration& config);
};

/**
 * The type for the MarketplaceReporting Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceReportingEndpointProviderBase =
    EndpointProviderBase<MarketplaceReportingClientConfiguration, MarketplaceReportingBuiltInParameters,
                         MarketplaceReportingClientContextParameters>;

using MarketplaceReportingDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceReportingClientConfiguration, MarketplaceReportingBuiltInParameters,
                        MarketplaceReportingClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceReporting

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACEREPORTING_EXTERN template class AWS_MARKETPLACEREPORTING_API
    Aws::Endpoint::EndpointProviderBase<MarketplaceReporting::Endpoint::MarketplaceReportingClientConfiguration,
                                        MarketplaceReporting::Endpoint::MarketplaceReportingBuiltInParameters,
                                        MarketplaceReporting::Endpoint::MarketplaceReportingClientContextParameters>;

AWS_MARKETPLACEREPORTING_EXTERN template class AWS_MARKETPLACEREPORTING_API
    Aws::Endpoint::BDDEndpointProvider<MarketplaceReporting::Endpoint::MarketplaceReportingClientConfiguration,
                                       MarketplaceReporting::Endpoint::MarketplaceReportingBuiltInParameters,
                                       MarketplaceReporting::Endpoint::MarketplaceReportingClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceReporting {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEREPORTING_API MarketplaceReportingEndpointProvider : public MarketplaceReportingDefaultEpProviderBase {
 public:
  using MarketplaceReportingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceReportingEndpointProvider();

  ~MarketplaceReportingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceReporting
}  // namespace Aws
