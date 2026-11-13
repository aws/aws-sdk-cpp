/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/OutpostsEndpointProvider.h>
#include <aws/outposts/internal/OutpostsEndpointRules.h>

namespace Aws {
#ifndef AWS_OUTPOSTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Outposts::Endpoint::OutpostsClientConfiguration,
                                                   Outposts::Endpoint::OutpostsBuiltInParameters,
                                                   Outposts::Endpoint::OutpostsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Outposts::Endpoint::OutpostsClientConfiguration,
                                                  Outposts::Endpoint::OutpostsBuiltInParameters,
                                                  Outposts::Endpoint::OutpostsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Outposts {
namespace Endpoint {
OutpostsEndpointProvider::OutpostsEndpointProvider()
    : OutpostsDefaultEpProviderBase(Aws::Outposts::OutpostsEndpointRules::GetRulesBlob(),
                                    Aws::Outposts::OutpostsEndpointRules::RulesBlobSize) {}

void OutpostsBuiltInParameters::SetFromClientConfiguration(const OutpostsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OutpostsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OutpostsBuiltInParameters::SetFromClientConfiguration(const OutpostsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OutpostsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OutpostsBuiltInParameters::SetServiceSpecificParameters(const OutpostsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Outposts
}  // namespace Aws
