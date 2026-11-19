/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/TrustedAdvisorClientConfiguration.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Endpoint {
using TrustedAdvisorClientConfiguration = Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TrustedAdvisorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TRUSTEDADVISOR_API TrustedAdvisorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TrustedAdvisorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TrustedAdvisorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TrustedAdvisorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TrustedAdvisorClientConfiguration& config);
};

/**
 * The type for the TrustedAdvisor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TrustedAdvisorEndpointProviderBase =
    EndpointProviderBase<TrustedAdvisorClientConfiguration, TrustedAdvisorBuiltInParameters, TrustedAdvisorClientContextParameters>;

using TrustedAdvisorDefaultEpProviderBase =
    BDDEndpointProvider<TrustedAdvisorClientConfiguration, TrustedAdvisorBuiltInParameters, TrustedAdvisorClientContextParameters>;

}  // namespace Endpoint
}  // namespace TrustedAdvisor

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TRUSTEDADVISOR_EXTERN template class AWS_TRUSTEDADVISOR_API Aws::Endpoint::EndpointProviderBase<
    TrustedAdvisor::Endpoint::TrustedAdvisorClientConfiguration, TrustedAdvisor::Endpoint::TrustedAdvisorBuiltInParameters,
    TrustedAdvisor::Endpoint::TrustedAdvisorClientContextParameters>;

AWS_TRUSTEDADVISOR_EXTERN template class AWS_TRUSTEDADVISOR_API Aws::Endpoint::BDDEndpointProvider<
    TrustedAdvisor::Endpoint::TrustedAdvisorClientConfiguration, TrustedAdvisor::Endpoint::TrustedAdvisorBuiltInParameters,
    TrustedAdvisor::Endpoint::TrustedAdvisorClientContextParameters>;
}  // namespace Endpoint

namespace TrustedAdvisor {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TRUSTEDADVISOR_API TrustedAdvisorEndpointProvider : public TrustedAdvisorDefaultEpProviderBase {
 public:
  using TrustedAdvisorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TrustedAdvisorEndpointProvider();

  ~TrustedAdvisorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace TrustedAdvisor
}  // namespace Aws
