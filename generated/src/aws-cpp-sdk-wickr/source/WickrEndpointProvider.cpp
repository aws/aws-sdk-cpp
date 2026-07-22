/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wickr/WickrEndpointProvider.h>
#include <aws/wickr/internal/WickrEndpointRules.h>

namespace Aws {
namespace Wickr {
namespace Endpoint {
WickrEndpointProvider::WickrEndpointProvider()
    : WickrDefaultEpProviderBase(Aws::Wickr::WickrEndpointRules::GetRulesBlob(), Aws::Wickr::WickrEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Wickr
}  // namespace Aws
