/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/WAFEndpointProvider.h>
#include <aws/waf/internal/WAFEndpointRules.h>

namespace Aws {
#ifndef AWS_WAF_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WAF::Endpoint::WAFClientConfiguration, WAF::Endpoint::WAFBuiltInParameters,
                                                   WAF::Endpoint::WAFClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WAF::Endpoint::WAFClientConfiguration, WAF::Endpoint::WAFBuiltInParameters,
                                                  WAF::Endpoint::WAFClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WAF {
namespace Endpoint {
WAFEndpointProvider::WAFEndpointProvider()
    : WAFDefaultEpProviderBase(Aws::WAF::WAFEndpointRules::GetRulesBlob(), Aws::WAF::WAFEndpointRules::RulesBlobSize) {}

void WAFBuiltInParameters::SetFromClientConfiguration(const WAFClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WAFClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WAFBuiltInParameters::SetFromClientConfiguration(const WAFClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WAFClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WAFBuiltInParameters::SetServiceSpecificParameters(const WAFClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WAF
}  // namespace Aws
