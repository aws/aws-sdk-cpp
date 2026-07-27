/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/Route53ResolverEndpointProvider.h>
#include <aws/route53resolver/internal/Route53ResolverEndpointRules.h>

namespace Aws {
namespace Route53Resolver {
namespace Endpoint {
Route53ResolverEndpointProvider::Route53ResolverEndpointProvider()
    : Route53ResolverDefaultEpProviderBase(Aws::Route53Resolver::Route53ResolverEndpointRules::GetRulesBlob(),
                                           Aws::Route53Resolver::Route53ResolverEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53Resolver
}  // namespace Aws
