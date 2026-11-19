/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/WAFRegionalEndpointProvider.h>
#include <aws/waf-regional/internal/WAFRegionalEndpointRules.h>

namespace Aws {
#ifndef AWS_WAFREGIONAL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WAFRegional::Endpoint::WAFRegionalClientConfiguration,
                                                   WAFRegional::Endpoint::WAFRegionalBuiltInParameters,
                                                   WAFRegional::Endpoint::WAFRegionalClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WAFRegional::Endpoint::WAFRegionalClientConfiguration,
                                                  WAFRegional::Endpoint::WAFRegionalBuiltInParameters,
                                                  WAFRegional::Endpoint::WAFRegionalClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WAFRegional {
namespace Endpoint {
WAFRegionalEndpointProvider::WAFRegionalEndpointProvider()
    : WAFRegionalDefaultEpProviderBase(Aws::WAFRegional::WAFRegionalEndpointRules::GetRulesBlob(),
                                       Aws::WAFRegional::WAFRegionalEndpointRules::RulesBlobSize) {}

void WAFRegionalBuiltInParameters::SetFromClientConfiguration(const WAFRegionalClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WAFRegionalClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WAFRegionalBuiltInParameters::SetFromClientConfiguration(const WAFRegionalClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WAFRegionalClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WAFRegionalBuiltInParameters::SetServiceSpecificParameters(const WAFRegionalClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WAFRegional
}  // namespace Aws
