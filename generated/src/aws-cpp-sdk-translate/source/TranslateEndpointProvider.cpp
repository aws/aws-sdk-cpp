/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/TranslateEndpointProvider.h>
#include <aws/translate/internal/TranslateEndpointRules.h>

namespace Aws {
#ifndef AWS_TRANSLATE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Translate::Endpoint::TranslateClientConfiguration,
                                                   Translate::Endpoint::TranslateBuiltInParameters,
                                                   Translate::Endpoint::TranslateClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Translate::Endpoint::TranslateClientConfiguration,
                                                  Translate::Endpoint::TranslateBuiltInParameters,
                                                  Translate::Endpoint::TranslateClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Translate {
namespace Endpoint {
TranslateEndpointProvider::TranslateEndpointProvider()
    : TranslateDefaultEpProviderBase(Aws::Translate::TranslateEndpointRules::GetRulesBlob(),
                                     Aws::Translate::TranslateEndpointRules::RulesBlobSize) {}

void TranslateBuiltInParameters::SetFromClientConfiguration(const TranslateClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TranslateClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TranslateBuiltInParameters::SetFromClientConfiguration(const TranslateClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TranslateClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TranslateBuiltInParameters::SetServiceSpecificParameters(const TranslateClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Translate
}  // namespace Aws
