/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehubv2/Resiliencehubv2EndpointProvider.h>
#include <aws/resiliencehubv2/internal/Resiliencehubv2EndpointRules.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Endpoint {
Resiliencehubv2EndpointProvider::Resiliencehubv2EndpointProvider()
    : Resiliencehubv2DefaultEpProviderBase(Aws::resiliencehubv2::Resiliencehubv2EndpointRules::GetRulesBlob(),
                                           Aws::resiliencehubv2::Resiliencehubv2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace resiliencehubv2
}  // namespace Aws
