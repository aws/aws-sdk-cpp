/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/ProtonEndpointProvider.h>
#include <aws/proton/internal/ProtonEndpointRules.h>

namespace Aws {
namespace Proton {
namespace Endpoint {
ProtonEndpointProvider::ProtonEndpointProvider()
    : ProtonDefaultEpProviderBase(Aws::Proton::ProtonEndpointRules::GetRulesBlob(), Aws::Proton::ProtonEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Proton
}  // namespace Aws
