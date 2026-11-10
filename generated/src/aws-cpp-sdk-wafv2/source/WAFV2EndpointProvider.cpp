/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/WAFV2EndpointProvider.h>
#include <aws/wafv2/internal/WAFV2EndpointRules.h>

namespace Aws {
#ifndef AWS_WAFV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WAFV2::Endpoint::WAFV2ClientConfiguration, WAFV2::Endpoint::WAFV2BuiltInParameters,
                                                   WAFV2::Endpoint::WAFV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WAFV2::Endpoint::WAFV2ClientConfiguration, WAFV2::Endpoint::WAFV2BuiltInParameters,
                                                  WAFV2::Endpoint::WAFV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WAFV2 {
namespace Endpoint {
WAFV2EndpointProvider::WAFV2EndpointProvider()
    : WAFV2DefaultEpProviderBase(Aws::WAFV2::WAFV2EndpointRules::GetRulesBlob(), Aws::WAFV2::WAFV2EndpointRules::RulesBlobSize) {}

void WAFV2BuiltInParameters::SetFromClientConfiguration(const WAFV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WAFV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WAFV2BuiltInParameters::SetFromClientConfiguration(const WAFV2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WAFV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WAFV2BuiltInParameters::SetServiceSpecificParameters(const WAFV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WAFV2
}  // namespace Aws
