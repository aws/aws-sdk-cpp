/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/SnowballEndpointProvider.h>
#include <aws/snowball/internal/SnowballEndpointRules.h>

namespace Aws {
namespace Snowball {
namespace Endpoint {
SnowballEndpointProvider::SnowballEndpointProvider()
    : SnowballDefaultEpProviderBase(Aws::Snowball::SnowballEndpointRules::GetRulesBlob(),
                                    Aws::Snowball::SnowballEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Snowball
}  // namespace Aws
