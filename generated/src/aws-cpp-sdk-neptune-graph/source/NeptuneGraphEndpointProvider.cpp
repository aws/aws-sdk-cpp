/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/NeptuneGraphEndpointProvider.h>
#include <aws/neptune-graph/internal/NeptuneGraphEndpointRules.h>

namespace Aws {
#ifndef AWS_NEPTUNEGRAPH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NeptuneGraph::Endpoint::NeptuneGraphClientConfiguration,
                                                   NeptuneGraph::Endpoint::NeptuneGraphBuiltInParameters,
                                                   NeptuneGraph::Endpoint::NeptuneGraphClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NeptuneGraph::Endpoint::NeptuneGraphClientConfiguration,
                                                  NeptuneGraph::Endpoint::NeptuneGraphBuiltInParameters,
                                                  NeptuneGraph::Endpoint::NeptuneGraphClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NeptuneGraph {
namespace Endpoint {
NeptuneGraphEndpointProvider::NeptuneGraphEndpointProvider()
    : NeptuneGraphDefaultEpProviderBase(Aws::NeptuneGraph::NeptuneGraphEndpointRules::GetRulesBlob(),
                                        Aws::NeptuneGraph::NeptuneGraphEndpointRules::RulesBlobSize) {}

void NeptuneGraphBuiltInParameters::SetFromClientConfiguration(const NeptuneGraphClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NeptuneGraphClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NeptuneGraphBuiltInParameters::SetFromClientConfiguration(const NeptuneGraphClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NeptuneGraphClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NeptuneGraphBuiltInParameters::SetServiceSpecificParameters(const NeptuneGraphClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace NeptuneGraph
}  // namespace Aws
