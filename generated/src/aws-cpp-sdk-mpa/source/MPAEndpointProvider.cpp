/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/MPAEndpointProvider.h>
#include <aws/mpa/internal/MPAEndpointRules.h>

namespace Aws {
#ifndef AWS_MPA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MPA::Endpoint::MPAClientConfiguration, MPA::Endpoint::MPABuiltInParameters,
                                                   MPA::Endpoint::MPAClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MPA::Endpoint::MPAClientConfiguration, MPA::Endpoint::MPABuiltInParameters,
                                                  MPA::Endpoint::MPAClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MPA {
namespace Endpoint {
MPAEndpointProvider::MPAEndpointProvider()
    : MPADefaultEpProviderBase(Aws::MPA::MPAEndpointRules::GetRulesBlob(), Aws::MPA::MPAEndpointRules::RulesBlobSize) {}

void MPABuiltInParameters::SetFromClientConfiguration(const MPAClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MPAClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MPABuiltInParameters::SetFromClientConfiguration(const MPAClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MPAClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MPABuiltInParameters::SetServiceSpecificParameters(const MPAClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace MPA
}  // namespace Aws
