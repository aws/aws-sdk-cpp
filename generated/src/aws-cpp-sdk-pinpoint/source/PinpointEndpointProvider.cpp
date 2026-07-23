/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/PinpointEndpointProvider.h>
#include <aws/pinpoint/internal/PinpointEndpointRules.h>

namespace Aws {
namespace Pinpoint {
namespace Endpoint {
PinpointEndpointProvider::PinpointEndpointProvider()
    : PinpointDefaultEpProviderBase(Aws::Pinpoint::PinpointEndpointRules::GetRulesBlob(),
                                    Aws::Pinpoint::PinpointEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Pinpoint
}  // namespace Aws
