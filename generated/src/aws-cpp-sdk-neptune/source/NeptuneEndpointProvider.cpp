/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/NeptuneEndpointProvider.h>
#include <aws/neptune/internal/NeptuneEndpointRules.h>

namespace Aws {
#ifndef AWS_NEPTUNE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Neptune::Endpoint::NeptuneClientConfiguration,
                                                   Neptune::Endpoint::NeptuneBuiltInParameters,
                                                   Neptune::Endpoint::NeptuneClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Neptune::Endpoint::NeptuneClientConfiguration,
                                                  Neptune::Endpoint::NeptuneBuiltInParameters,
                                                  Neptune::Endpoint::NeptuneClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Neptune {
namespace Endpoint {
NeptuneEndpointProvider::NeptuneEndpointProvider()
    : NeptuneDefaultEpProviderBase(Aws::Neptune::NeptuneEndpointRules::GetRulesBlob(), Aws::Neptune::NeptuneEndpointRules::RulesBlobSize) {}

void NeptuneBuiltInParameters::SetFromClientConfiguration(const NeptuneClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NeptuneClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NeptuneBuiltInParameters::SetFromClientConfiguration(const NeptuneClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NeptuneClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NeptuneBuiltInParameters::SetServiceSpecificParameters(const NeptuneClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Neptune
}  // namespace Aws
