/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/PipesEndpointProvider.h>
#include <aws/pipes/internal/PipesEndpointRules.h>

namespace Aws {
namespace Pipes {
namespace Endpoint {
PipesEndpointProvider::PipesEndpointProvider()
    : PipesDefaultEpProviderBase(Aws::Pipes::PipesEndpointRules::GetRulesBlob(), Aws::Pipes::PipesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Pipes
}  // namespace Aws
