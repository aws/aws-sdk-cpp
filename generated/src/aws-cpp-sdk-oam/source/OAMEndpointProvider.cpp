/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/OAMEndpointProvider.h>
#include <aws/oam/internal/OAMEndpointRules.h>

namespace Aws {
#ifndef AWS_OAM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<OAM::Endpoint::OAMClientConfiguration, OAM::Endpoint::OAMBuiltInParameters,
                                                   OAM::Endpoint::OAMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<OAM::Endpoint::OAMClientConfiguration, OAM::Endpoint::OAMBuiltInParameters,
                                                  OAM::Endpoint::OAMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace OAM {
namespace Endpoint {
OAMEndpointProvider::OAMEndpointProvider()
    : OAMDefaultEpProviderBase(Aws::OAM::OAMEndpointRules::GetRulesBlob(), Aws::OAM::OAMEndpointRules::RulesBlobSize) {}

void OAMBuiltInParameters::SetFromClientConfiguration(const OAMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OAMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OAMBuiltInParameters::SetFromClientConfiguration(const OAMClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OAMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OAMBuiltInParameters::SetServiceSpecificParameters(const OAMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace OAM
}  // namespace Aws
