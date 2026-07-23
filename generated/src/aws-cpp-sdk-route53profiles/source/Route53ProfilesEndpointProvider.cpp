/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/Route53ProfilesEndpointProvider.h>
#include <aws/route53profiles/internal/Route53ProfilesEndpointRules.h>

namespace Aws {
namespace Route53Profiles {
namespace Endpoint {
Route53ProfilesEndpointProvider::Route53ProfilesEndpointProvider()
    : Route53ProfilesDefaultEpProviderBase(Aws::Route53Profiles::Route53ProfilesEndpointRules::GetRulesBlob(),
                                           Aws::Route53Profiles::Route53ProfilesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53Profiles
}  // namespace Aws
