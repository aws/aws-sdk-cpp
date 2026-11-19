/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingClientConfiguration.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Endpoint {
using PartnerCentralSellingClientConfiguration = Aws::PartnerCentralSelling::PartnerCentralSellingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralSellingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PARTNERCENTRALSELLING_API PartnerCentralSellingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PartnerCentralSellingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PartnerCentralSellingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PartnerCentralSellingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PartnerCentralSellingClientConfiguration& config);
};

/**
 * The type for the PartnerCentralSelling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralSellingEndpointProviderBase =
    EndpointProviderBase<PartnerCentralSellingClientConfiguration, PartnerCentralSellingBuiltInParameters,
                         PartnerCentralSellingClientContextParameters>;

using PartnerCentralSellingDefaultEpProviderBase =
    BDDEndpointProvider<PartnerCentralSellingClientConfiguration, PartnerCentralSellingBuiltInParameters,
                        PartnerCentralSellingClientContextParameters>;

}  // namespace Endpoint
}  // namespace PartnerCentralSelling

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PARTNERCENTRALSELLING_EXTERN template class AWS_PARTNERCENTRALSELLING_API
    Aws::Endpoint::EndpointProviderBase<PartnerCentralSelling::Endpoint::PartnerCentralSellingClientConfiguration,
                                        PartnerCentralSelling::Endpoint::PartnerCentralSellingBuiltInParameters,
                                        PartnerCentralSelling::Endpoint::PartnerCentralSellingClientContextParameters>;

AWS_PARTNERCENTRALSELLING_EXTERN template class AWS_PARTNERCENTRALSELLING_API
    Aws::Endpoint::BDDEndpointProvider<PartnerCentralSelling::Endpoint::PartnerCentralSellingClientConfiguration,
                                       PartnerCentralSelling::Endpoint::PartnerCentralSellingBuiltInParameters,
                                       PartnerCentralSelling::Endpoint::PartnerCentralSellingClientContextParameters>;
}  // namespace Endpoint

namespace PartnerCentralSelling {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALSELLING_API PartnerCentralSellingEndpointProvider : public PartnerCentralSellingDefaultEpProviderBase {
 public:
  using PartnerCentralSellingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralSellingEndpointProvider();

  ~PartnerCentralSellingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralSelling
}  // namespace Aws
