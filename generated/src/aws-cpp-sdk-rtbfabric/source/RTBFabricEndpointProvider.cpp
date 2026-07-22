/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/RTBFabricEndpointProvider.h>
#include <aws/rtbfabric/internal/RTBFabricEndpointRules.h>

namespace Aws {
namespace RTBFabric {
namespace Endpoint {
RTBFabricEndpointProvider::RTBFabricEndpointProvider()
    : RTBFabricDefaultEpProviderBase(Aws::RTBFabric::RTBFabricEndpointRules::GetRulesBlob(),
                                     Aws::RTBFabric::RTBFabricEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RTBFabric
}  // namespace Aws
