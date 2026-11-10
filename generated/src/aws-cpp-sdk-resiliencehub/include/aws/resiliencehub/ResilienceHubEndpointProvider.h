/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/ResilienceHubClientConfiguration.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Endpoint {
using ResilienceHubClientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ResilienceHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESILIENCEHUB_API ResilienceHubBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ResilienceHubBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ResilienceHubClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ResilienceHubClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ResilienceHubClientConfiguration& config);
};

/**
 * The type for the ResilienceHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResilienceHubEndpointProviderBase =
    EndpointProviderBase<ResilienceHubClientConfiguration, ResilienceHubBuiltInParameters, ResilienceHubClientContextParameters>;

using ResilienceHubDefaultEpProviderBase =
    BDDEndpointProvider<ResilienceHubClientConfiguration, ResilienceHubBuiltInParameters, ResilienceHubClientContextParameters>;

}  // namespace Endpoint
}  // namespace ResilienceHub

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESILIENCEHUB_EXTERN template class AWS_RESILIENCEHUB_API Aws::Endpoint::EndpointProviderBase<
    ResilienceHub::Endpoint::ResilienceHubClientConfiguration, ResilienceHub::Endpoint::ResilienceHubBuiltInParameters,
    ResilienceHub::Endpoint::ResilienceHubClientContextParameters>;

AWS_RESILIENCEHUB_EXTERN template class AWS_RESILIENCEHUB_API Aws::Endpoint::BDDEndpointProvider<
    ResilienceHub::Endpoint::ResilienceHubClientConfiguration, ResilienceHub::Endpoint::ResilienceHubBuiltInParameters,
    ResilienceHub::Endpoint::ResilienceHubClientContextParameters>;
}  // namespace Endpoint

namespace ResilienceHub {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESILIENCEHUB_API ResilienceHubEndpointProvider : public ResilienceHubDefaultEpProviderBase {
 public:
  using ResilienceHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ResilienceHubEndpointProvider();

  ~ResilienceHubEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ResilienceHub
}  // namespace Aws
