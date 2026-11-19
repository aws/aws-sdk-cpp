/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/SigninClientConfiguration.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
namespace Endpoint {
using SigninClientConfiguration = Aws::Signin::SigninClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SigninClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SIGNIN_API SigninBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SigninBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SigninClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SigninClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SigninClientConfiguration& config);
};

/**
 * The type for the Signin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SigninEndpointProviderBase = EndpointProviderBase<SigninClientConfiguration, SigninBuiltInParameters, SigninClientContextParameters>;

using SigninDefaultEpProviderBase = BDDEndpointProvider<SigninClientConfiguration, SigninBuiltInParameters, SigninClientContextParameters>;

}  // namespace Endpoint
}  // namespace Signin

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SIGNIN_EXTERN template class AWS_SIGNIN_API
    Aws::Endpoint::EndpointProviderBase<Signin::Endpoint::SigninClientConfiguration, Signin::Endpoint::SigninBuiltInParameters,
                                        Signin::Endpoint::SigninClientContextParameters>;

AWS_SIGNIN_EXTERN template class AWS_SIGNIN_API
    Aws::Endpoint::BDDEndpointProvider<Signin::Endpoint::SigninClientConfiguration, Signin::Endpoint::SigninBuiltInParameters,
                                       Signin::Endpoint::SigninClientContextParameters>;
}  // namespace Endpoint

namespace Signin {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SIGNIN_API SigninEndpointProvider : public SigninDefaultEpProviderBase {
 public:
  using SigninResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SigninEndpointProvider();

  ~SigninEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Signin
}  // namespace Aws
