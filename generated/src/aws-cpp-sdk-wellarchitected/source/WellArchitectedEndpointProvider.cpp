/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/WellArchitectedEndpointProvider.h>
#include <aws/wellarchitected/internal/WellArchitectedEndpointRules.h>

namespace Aws {
namespace WellArchitected {
namespace Endpoint {
WellArchitectedEndpointProvider::WellArchitectedEndpointProvider()
    : WellArchitectedDefaultEpProviderBase(Aws::WellArchitected::WellArchitectedEndpointRules::GetRulesBlob(),
                                           Aws::WellArchitected::WellArchitectedEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WellArchitected
}  // namespace Aws
