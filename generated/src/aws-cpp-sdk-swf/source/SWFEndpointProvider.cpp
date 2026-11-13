/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/SWFEndpointProvider.h>
#include <aws/swf/internal/SWFEndpointRules.h>

namespace Aws {
#ifndef AWS_SWF_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SWF::Endpoint::SWFClientConfiguration, SWF::Endpoint::SWFBuiltInParameters,
                                                   SWF::Endpoint::SWFClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SWF::Endpoint::SWFClientConfiguration, SWF::Endpoint::SWFBuiltInParameters,
                                                  SWF::Endpoint::SWFClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SWF {
namespace Endpoint {
SWFEndpointProvider::SWFEndpointProvider()
    : SWFDefaultEpProviderBase(Aws::SWF::SWFEndpointRules::GetRulesBlob(), Aws::SWF::SWFEndpointRules::RulesBlobSize) {}

void SWFBuiltInParameters::SetFromClientConfiguration(const SWFClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SWFClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SWFBuiltInParameters::SetFromClientConfiguration(const SWFClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SWFClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SWFBuiltInParameters::SetServiceSpecificParameters(const SWFClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SWF
}  // namespace Aws
