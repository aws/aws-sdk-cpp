/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/NeptunedataEndpointProvider.h>
#include <aws/neptunedata/internal/NeptunedataEndpointRules.h>

namespace Aws {
#ifndef AWS_NEPTUNEDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<neptunedata::Endpoint::NeptunedataClientConfiguration,
                                                   neptunedata::Endpoint::NeptunedataBuiltInParameters,
                                                   neptunedata::Endpoint::NeptunedataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<neptunedata::Endpoint::NeptunedataClientConfiguration,
                                                  neptunedata::Endpoint::NeptunedataBuiltInParameters,
                                                  neptunedata::Endpoint::NeptunedataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace neptunedata {
namespace Endpoint {
NeptunedataEndpointProvider::NeptunedataEndpointProvider()
    : NeptunedataDefaultEpProviderBase(Aws::neptunedata::NeptunedataEndpointRules::GetRulesBlob(),
                                       Aws::neptunedata::NeptunedataEndpointRules::RulesBlobSize) {}

void NeptunedataBuiltInParameters::SetFromClientConfiguration(const NeptunedataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NeptunedataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NeptunedataBuiltInParameters::SetFromClientConfiguration(const NeptunedataClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NeptunedataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NeptunedataBuiltInParameters::SetServiceSpecificParameters(const NeptunedataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace neptunedata
}  // namespace Aws
