/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-oidc/SSOOIDCClientConfiguration.h>
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>

namespace Aws {
namespace SSOOIDC {
namespace Endpoint {
using SSOOIDCClientConfiguration = Aws::SSOOIDC::SSOOIDCClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSOOIDCClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSOOIDC_API SSOOIDCBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSOOIDCBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSOOIDCClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSOOIDCClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSOOIDCClientConfiguration& config);
};

/**
 * The type for the SSOOIDC Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSOOIDCEndpointProviderBase =
    EndpointProviderBase<SSOOIDCClientConfiguration, SSOOIDCBuiltInParameters, SSOOIDCClientContextParameters>;

using SSOOIDCDefaultEpProviderBase =
    BDDEndpointProvider<SSOOIDCClientConfiguration, SSOOIDCBuiltInParameters, SSOOIDCClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSOOIDC

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSOOIDC_EXTERN template class AWS_SSOOIDC_API
    Aws::Endpoint::EndpointProviderBase<SSOOIDC::Endpoint::SSOOIDCClientConfiguration, SSOOIDC::Endpoint::SSOOIDCBuiltInParameters,
                                        SSOOIDC::Endpoint::SSOOIDCClientContextParameters>;

AWS_SSOOIDC_EXTERN template class AWS_SSOOIDC_API
    Aws::Endpoint::BDDEndpointProvider<SSOOIDC::Endpoint::SSOOIDCClientConfiguration, SSOOIDC::Endpoint::SSOOIDCBuiltInParameters,
                                       SSOOIDC::Endpoint::SSOOIDCClientContextParameters>;
}  // namespace Endpoint

namespace SSOOIDC {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSOOIDC_API SSOOIDCEndpointProvider : public SSOOIDCDefaultEpProviderBase {
 public:
  using SSOOIDCResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSOOIDCEndpointProvider();

  ~SSOOIDCEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSOOIDC
}  // namespace Aws
