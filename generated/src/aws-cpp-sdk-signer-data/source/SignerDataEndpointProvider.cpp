/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer-data/SignerDataEndpointProvider.h>
#include <aws/signer-data/internal/SignerDataEndpointRules.h>

namespace Aws {
#ifndef AWS_SIGNERDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SignerData::Endpoint::SignerDataClientConfiguration,
                                                   SignerData::Endpoint::SignerDataBuiltInParameters,
                                                   SignerData::Endpoint::SignerDataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SignerData::Endpoint::SignerDataClientConfiguration,
                                                  SignerData::Endpoint::SignerDataBuiltInParameters,
                                                  SignerData::Endpoint::SignerDataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SignerData {
namespace Endpoint {
SignerDataEndpointProvider::SignerDataEndpointProvider()
    : SignerDataDefaultEpProviderBase(Aws::SignerData::SignerDataEndpointRules::GetRulesBlob(),
                                      Aws::SignerData::SignerDataEndpointRules::RulesBlobSize) {}

void SignerDataBuiltInParameters::SetFromClientConfiguration(const SignerDataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SignerDataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SignerDataBuiltInParameters::SetFromClientConfiguration(const SignerDataClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SignerDataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SignerDataBuiltInParameters::SetServiceSpecificParameters(const SignerDataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SignerData
}  // namespace Aws
