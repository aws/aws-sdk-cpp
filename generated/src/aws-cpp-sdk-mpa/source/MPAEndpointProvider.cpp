/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/MPAEndpointProvider.h>
#include <aws/mpa/internal/MPAEndpointRules.h>

namespace Aws {
namespace MPA {
namespace Endpoint {
MPAEndpointProvider::MPAEndpointProvider()
    : MPADefaultEpProviderBase(Aws::MPA::MPAEndpointRules::GetRulesBlob(), Aws::MPA::MPAEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MPA
}  // namespace Aws
