/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/SignerEndpointProvider.h>
#include <aws/signer/internal/SignerEndpointRules.h>

namespace Aws {
#ifndef AWS_SIGNER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<signer::Endpoint::SignerClientConfiguration, signer::Endpoint::SignerBuiltInParameters,
                                                   signer::Endpoint::SignerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<signer::Endpoint::SignerClientConfiguration, signer::Endpoint::SignerBuiltInParameters,
                                                  signer::Endpoint::SignerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace signer {
namespace Endpoint {
SignerEndpointProvider::SignerEndpointProvider()
    : SignerDefaultEpProviderBase(Aws::signer::SignerEndpointRules::GetRulesBlob(), Aws::signer::SignerEndpointRules::RulesBlobSize) {}

void SignerBuiltInParameters::SetFromClientConfiguration(const SignerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SignerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SignerBuiltInParameters::SetFromClientConfiguration(const SignerClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SignerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SignerBuiltInParameters::SetServiceSpecificParameters(const SignerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace signer
}  // namespace Aws
