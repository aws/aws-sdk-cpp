/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehubv2/Resiliencehubv2EndpointProvider.h>
#include <aws/resiliencehubv2/internal/Resiliencehubv2EndpointRules.h>

namespace Aws {
#ifndef AWS_RESILIENCEHUBV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<resiliencehubv2::Endpoint::Resiliencehubv2ClientConfiguration,
                                                   resiliencehubv2::Endpoint::Resiliencehubv2BuiltInParameters,
                                                   resiliencehubv2::Endpoint::Resiliencehubv2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<resiliencehubv2::Endpoint::Resiliencehubv2ClientConfiguration,
                                                  resiliencehubv2::Endpoint::Resiliencehubv2BuiltInParameters,
                                                  resiliencehubv2::Endpoint::Resiliencehubv2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace resiliencehubv2 {
namespace Endpoint {
Resiliencehubv2EndpointProvider::Resiliencehubv2EndpointProvider()
    : Resiliencehubv2DefaultEpProviderBase(Aws::resiliencehubv2::Resiliencehubv2EndpointRules::GetRulesBlob(),
                                           Aws::resiliencehubv2::Resiliencehubv2EndpointRules::RulesBlobSize) {}

void Resiliencehubv2BuiltInParameters::SetFromClientConfiguration(const Resiliencehubv2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Resiliencehubv2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Resiliencehubv2BuiltInParameters::SetFromClientConfiguration(const Resiliencehubv2ClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Resiliencehubv2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Resiliencehubv2BuiltInParameters::SetServiceSpecificParameters(const Resiliencehubv2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace resiliencehubv2
}  // namespace Aws
