/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simpledbv2/SimpleDBv2EndpointProvider.h>
#include <aws/simpledbv2/internal/SimpleDBv2EndpointRules.h>

namespace Aws {
namespace SimpleDBv2 {
namespace Endpoint {
SimpleDBv2EndpointProvider::SimpleDBv2EndpointProvider()
    : SimpleDBv2DefaultEpProviderBase(Aws::SimpleDBv2::SimpleDBv2EndpointRules::GetRulesBlob(),
                                      Aws::SimpleDBv2::SimpleDBv2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SimpleDBv2
}  // namespace Aws
