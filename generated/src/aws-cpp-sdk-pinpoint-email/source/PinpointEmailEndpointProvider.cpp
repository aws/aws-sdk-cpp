/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/PinpointEmailEndpointProvider.h>
#include <aws/pinpoint-email/internal/PinpointEmailEndpointRules.h>

namespace Aws {
namespace PinpointEmail {
namespace Endpoint {
PinpointEmailEndpointProvider::PinpointEmailEndpointProvider()
    : PinpointEmailDefaultEpProviderBase(Aws::PinpointEmail::PinpointEmailEndpointRules::GetRulesBlob(),
                                         Aws::PinpointEmail::PinpointEmailEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PinpointEmail
}  // namespace Aws
