/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/WickrClientConfiguration.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
namespace Endpoint {
using WickrClientConfiguration = Aws::Wickr::WickrClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WickrClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WICKR_API WickrBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WickrBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WickrClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WickrClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WickrClientConfiguration& config);
};

/**
 * The type for the Wickr Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WickrEndpointProviderBase = EndpointProviderBase<WickrClientConfiguration, WickrBuiltInParameters, WickrClientContextParameters>;

using WickrDefaultEpProviderBase = BDDEndpointProvider<WickrClientConfiguration, WickrBuiltInParameters, WickrClientContextParameters>;

}  // namespace Endpoint
}  // namespace Wickr

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WICKR_EXTERN template class AWS_WICKR_API Aws::Endpoint::EndpointProviderBase<
    Wickr::Endpoint::WickrClientConfiguration, Wickr::Endpoint::WickrBuiltInParameters, Wickr::Endpoint::WickrClientContextParameters>;

AWS_WICKR_EXTERN template class AWS_WICKR_API Aws::Endpoint::BDDEndpointProvider<
    Wickr::Endpoint::WickrClientConfiguration, Wickr::Endpoint::WickrBuiltInParameters, Wickr::Endpoint::WickrClientContextParameters>;
}  // namespace Endpoint

namespace Wickr {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WICKR_API WickrEndpointProvider : public WickrDefaultEpProviderBase {
 public:
  using WickrResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WickrEndpointProvider();

  ~WickrEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Wickr
}  // namespace Aws
