/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53globalresolver/Route53GlobalResolverEndpointProvider.h>
#include <aws/route53globalresolver/internal/Route53GlobalResolverEndpointRules.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Endpoint {
Route53GlobalResolverEndpointProvider::Route53GlobalResolverEndpointProvider()
    : Route53GlobalResolverDefaultEpProviderBase(Aws::Route53GlobalResolver::Route53GlobalResolverEndpointRules::GetRulesBlob(),
                                                 Aws::Route53GlobalResolver::Route53GlobalResolverEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53GlobalResolver
}  // namespace Aws
