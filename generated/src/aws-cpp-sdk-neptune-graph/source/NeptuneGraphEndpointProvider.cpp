/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/NeptuneGraphEndpointProvider.h>
#include <aws/neptune-graph/internal/NeptuneGraphEndpointRules.h>

namespace Aws {
namespace NeptuneGraph {
namespace Endpoint {
NeptuneGraphEndpointProvider::NeptuneGraphEndpointProvider()
    : NeptuneGraphDefaultEpProviderBase(Aws::NeptuneGraph::NeptuneGraphEndpointRules::GetRulesBlob(),
                                        Aws::NeptuneGraph::NeptuneGraphEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NeptuneGraph
}  // namespace Aws
