/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pricing/PricingClientConfiguration.h>
#include <aws/pricing/Pricing_EXPORTS.h>

namespace Aws {
namespace Pricing {
namespace Endpoint {
using PricingClientConfiguration = Aws::Pricing::PricingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PricingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PRICING_API PricingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PricingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PricingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PricingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PricingClientConfiguration& config);
};

/**
 * The type for the Pricing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PricingEndpointProviderBase =
    EndpointProviderBase<PricingClientConfiguration, PricingBuiltInParameters, PricingClientContextParameters>;

using PricingDefaultEpProviderBase =
    BDDEndpointProvider<PricingClientConfiguration, PricingBuiltInParameters, PricingClientContextParameters>;

}  // namespace Endpoint
}  // namespace Pricing

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PRICING_EXTERN template class AWS_PRICING_API
    Aws::Endpoint::EndpointProviderBase<Pricing::Endpoint::PricingClientConfiguration, Pricing::Endpoint::PricingBuiltInParameters,
                                        Pricing::Endpoint::PricingClientContextParameters>;

AWS_PRICING_EXTERN template class AWS_PRICING_API
    Aws::Endpoint::BDDEndpointProvider<Pricing::Endpoint::PricingClientConfiguration, Pricing::Endpoint::PricingBuiltInParameters,
                                       Pricing::Endpoint::PricingClientContextParameters>;
}  // namespace Endpoint

namespace Pricing {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PRICING_API PricingEndpointProvider : public PricingDefaultEpProviderBase {
 public:
  using PricingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PricingEndpointProvider();

  ~PricingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Pricing
}  // namespace Aws
