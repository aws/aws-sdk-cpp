/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso/SSOClientConfiguration.h>
#include <aws/sso/SSO_EXPORTS.h>

namespace Aws {
namespace SSO {
namespace Endpoint {
using SSOClientConfiguration = Aws::SSO::SSOClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSOClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSO_API SSOBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSOBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSOClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSOClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSOClientConfiguration& config);
};

/**
 * The type for the SSO Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSOEndpointProviderBase = EndpointProviderBase<SSOClientConfiguration, SSOBuiltInParameters, SSOClientContextParameters>;

using SSODefaultEpProviderBase = BDDEndpointProvider<SSOClientConfiguration, SSOBuiltInParameters, SSOClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSO

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSO_EXTERN template class AWS_SSO_API Aws::Endpoint::EndpointProviderBase<
    SSO::Endpoint::SSOClientConfiguration, SSO::Endpoint::SSOBuiltInParameters, SSO::Endpoint::SSOClientContextParameters>;

AWS_SSO_EXTERN template class AWS_SSO_API Aws::Endpoint::BDDEndpointProvider<
    SSO::Endpoint::SSOClientConfiguration, SSO::Endpoint::SSOBuiltInParameters, SSO::Endpoint::SSOClientContextParameters>;
}  // namespace Endpoint

namespace SSO {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSO_API SSOEndpointProvider : public SSODefaultEpProviderBase {
 public:
  using SSOResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSOEndpointProvider();

  ~SSOEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSO
}  // namespace Aws
