/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signin/SigninEndpointProvider.h>
#include <aws/signin/internal/SigninEndpointRules.h>

namespace Aws {
#ifndef AWS_SIGNIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Signin::Endpoint::SigninClientConfiguration, Signin::Endpoint::SigninBuiltInParameters,
                                                   Signin::Endpoint::SigninClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Signin::Endpoint::SigninClientConfiguration, Signin::Endpoint::SigninBuiltInParameters,
                                                  Signin::Endpoint::SigninClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Signin {
namespace Endpoint {
SigninEndpointProvider::SigninEndpointProvider()
    : SigninDefaultEpProviderBase(Aws::Signin::SigninEndpointRules::GetRulesBlob(), Aws::Signin::SigninEndpointRules::RulesBlobSize) {}

void SigninBuiltInParameters::SetFromClientConfiguration(const SigninClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SigninClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SigninBuiltInParameters::SetFromClientConfiguration(const SigninClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SigninClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SigninBuiltInParameters::SetServiceSpecificParameters(const SigninClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Signin
}  // namespace Aws
