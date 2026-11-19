/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsClientConfiguration.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Endpoint {
using PartnerCentralBenefitsClientConfiguration = Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralBenefitsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PARTNERCENTRALBENEFITS_API PartnerCentralBenefitsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PartnerCentralBenefitsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PartnerCentralBenefitsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PartnerCentralBenefitsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PartnerCentralBenefitsClientConfiguration& config);
};

/**
 * The type for the PartnerCentralBenefits Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralBenefitsEndpointProviderBase =
    EndpointProviderBase<PartnerCentralBenefitsClientConfiguration, PartnerCentralBenefitsBuiltInParameters,
                         PartnerCentralBenefitsClientContextParameters>;

using PartnerCentralBenefitsDefaultEpProviderBase =
    BDDEndpointProvider<PartnerCentralBenefitsClientConfiguration, PartnerCentralBenefitsBuiltInParameters,
                        PartnerCentralBenefitsClientContextParameters>;

}  // namespace Endpoint
}  // namespace PartnerCentralBenefits

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PARTNERCENTRALBENEFITS_EXTERN template class AWS_PARTNERCENTRALBENEFITS_API
    Aws::Endpoint::EndpointProviderBase<PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientConfiguration,
                                        PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsBuiltInParameters,
                                        PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientContextParameters>;

AWS_PARTNERCENTRALBENEFITS_EXTERN template class AWS_PARTNERCENTRALBENEFITS_API
    Aws::Endpoint::BDDEndpointProvider<PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientConfiguration,
                                       PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsBuiltInParameters,
                                       PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsClientContextParameters>;
}  // namespace Endpoint

namespace PartnerCentralBenefits {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALBENEFITS_API PartnerCentralBenefitsEndpointProvider : public PartnerCentralBenefitsDefaultEpProviderBase {
 public:
  using PartnerCentralBenefitsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralBenefitsEndpointProvider();

  ~PartnerCentralBenefitsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralBenefits
}  // namespace Aws
