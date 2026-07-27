/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/MgnEndpointProvider.h>
#include <aws/mgn/internal/MgnEndpointRules.h>

namespace Aws {
namespace mgn {
namespace Endpoint {
MgnEndpointProvider::MgnEndpointProvider()
    : MgnDefaultEpProviderBase(Aws::mgn::MgnEndpointRules::GetRulesBlob(), Aws::mgn::MgnEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace mgn
}  // namespace Aws
