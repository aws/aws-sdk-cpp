/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/Route53DomainsEndpointProvider.h>
#include <aws/route53domains/internal/Route53DomainsEndpointRules.h>

namespace Aws {
namespace Route53Domains {
namespace Endpoint {
Route53DomainsEndpointProvider::Route53DomainsEndpointProvider()
    : Route53DomainsDefaultEpProviderBase(Aws::Route53Domains::Route53DomainsEndpointRules::GetRulesBlob(),
                                          Aws::Route53Domains::Route53DomainsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53Domains
}  // namespace Aws
