/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/OutpostsEndpointProvider.h>
#include <aws/outposts/internal/OutpostsEndpointRules.h>

namespace Aws {
namespace Outposts {
namespace Endpoint {
OutpostsEndpointProvider::OutpostsEndpointProvider()
    : OutpostsDefaultEpProviderBase(Aws::Outposts::OutpostsEndpointRules::GetRulesBlob(),
                                    Aws::Outposts::OutpostsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Outposts
}  // namespace Aws
