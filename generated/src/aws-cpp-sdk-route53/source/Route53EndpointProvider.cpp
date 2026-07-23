/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/Route53EndpointProvider.h>
#include <aws/route53/internal/Route53EndpointRules.h>

namespace Aws {
namespace Route53 {
namespace Endpoint {
Route53EndpointProvider::Route53EndpointProvider()
    : Route53DefaultEpProviderBase(Aws::Route53::Route53EndpointRules::GetRulesBlob(), Aws::Route53::Route53EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53
}  // namespace Aws
