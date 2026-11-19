/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/SESV2EndpointProvider.h>
#include <aws/sesv2/internal/SESV2EndpointRules.h>

namespace Aws {
#ifndef AWS_SESV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SESV2::Endpoint::SESV2ClientConfiguration, SESV2::Endpoint::SESV2BuiltInParameters,
                                                   SESV2::Endpoint::SESV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SESV2::Endpoint::SESV2ClientConfiguration, SESV2::Endpoint::SESV2BuiltInParameters,
                                                  SESV2::Endpoint::SESV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SESV2 {
namespace Endpoint {
SESV2EndpointProvider::SESV2EndpointProvider()
    : SESV2DefaultEpProviderBase(Aws::SESV2::SESV2EndpointRules::GetRulesBlob(), Aws::SESV2::SESV2EndpointRules::RulesBlobSize) {}

void SESV2BuiltInParameters::SetFromClientConfiguration(const SESV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SESV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SESV2BuiltInParameters::SetFromClientConfiguration(const SESV2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SESV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SESV2BuiltInParameters::SetServiceSpecificParameters(const SESV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SESV2
}  // namespace Aws
