/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/OSISEndpointProvider.h>
#include <aws/osis/internal/OSISEndpointRules.h>

namespace Aws {
#ifndef AWS_OSIS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<OSIS::Endpoint::OSISClientConfiguration, OSIS::Endpoint::OSISBuiltInParameters,
                                                   OSIS::Endpoint::OSISClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<OSIS::Endpoint::OSISClientConfiguration, OSIS::Endpoint::OSISBuiltInParameters,
                                                  OSIS::Endpoint::OSISClientContextParameters>;
}  // namespace Endpoint
#endif

namespace OSIS {
namespace Endpoint {
OSISEndpointProvider::OSISEndpointProvider()
    : OSISDefaultEpProviderBase(Aws::OSIS::OSISEndpointRules::GetRulesBlob(), Aws::OSIS::OSISEndpointRules::RulesBlobSize) {}

void OSISBuiltInParameters::SetFromClientConfiguration(const OSISClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OSISClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OSISBuiltInParameters::SetFromClientConfiguration(const OSISClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OSISClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OSISBuiltInParameters::SetServiceSpecificParameters(const OSISClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace OSIS
}  // namespace Aws
