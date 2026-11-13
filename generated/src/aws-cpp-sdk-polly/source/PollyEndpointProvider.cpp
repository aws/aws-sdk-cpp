/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/PollyEndpointProvider.h>
#include <aws/polly/internal/PollyEndpointRules.h>

namespace Aws {
#ifndef AWS_POLLY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Polly::Endpoint::PollyClientConfiguration, Polly::Endpoint::PollyBuiltInParameters,
                                                   Polly::Endpoint::PollyClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Polly::Endpoint::PollyClientConfiguration, Polly::Endpoint::PollyBuiltInParameters,
                                                  Polly::Endpoint::PollyClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Polly {
namespace Endpoint {
PollyEndpointProvider::PollyEndpointProvider()
    : PollyDefaultEpProviderBase(Aws::Polly::PollyEndpointRules::GetRulesBlob(), Aws::Polly::PollyEndpointRules::RulesBlobSize) {}

void PollyBuiltInParameters::SetFromClientConfiguration(const PollyClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PollyClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PollyBuiltInParameters::SetFromClientConfiguration(const PollyClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PollyClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PollyBuiltInParameters::SetServiceSpecificParameters(const PollyClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Polly
}  // namespace Aws
