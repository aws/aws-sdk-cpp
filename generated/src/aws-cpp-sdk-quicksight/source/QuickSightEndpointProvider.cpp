/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/internal/QuickSightEndpointRules.h>

namespace Aws {
namespace QuickSight {
namespace Endpoint {
QuickSightEndpointProvider::QuickSightEndpointProvider()
    : QuickSightDefaultEpProviderBase(Aws::QuickSight::QuickSightEndpointRules::GetRulesBlob(),
                                      Aws::QuickSight::QuickSightEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QuickSight
}  // namespace Aws
