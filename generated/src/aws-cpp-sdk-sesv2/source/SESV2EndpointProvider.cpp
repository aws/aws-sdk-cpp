/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/SESV2EndpointProvider.h>
#include <aws/sesv2/internal/SESV2EndpointRules.h>

namespace Aws {
namespace SESV2 {
namespace Endpoint {
SESV2EndpointProvider::SESV2EndpointProvider()
    : SESV2DefaultEpProviderBase(Aws::SESV2::SESV2EndpointRules::GetRulesBlob(), Aws::SESV2::SESV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SESV2
}  // namespace Aws
