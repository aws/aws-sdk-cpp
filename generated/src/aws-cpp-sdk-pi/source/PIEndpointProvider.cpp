/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/PIEndpointProvider.h>
#include <aws/pi/internal/PIEndpointRules.h>

namespace Aws {
namespace PI {
namespace Endpoint {
PIEndpointProvider::PIEndpointProvider()
    : PIDefaultEpProviderBase(Aws::PI::PIEndpointRules::GetRulesBlob(), Aws::PI::PIEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PI
}  // namespace Aws
