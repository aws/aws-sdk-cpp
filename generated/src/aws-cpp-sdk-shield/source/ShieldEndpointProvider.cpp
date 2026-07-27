/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/ShieldEndpointProvider.h>
#include <aws/shield/internal/ShieldEndpointRules.h>

namespace Aws {
namespace Shield {
namespace Endpoint {
ShieldEndpointProvider::ShieldEndpointProvider()
    : ShieldDefaultEpProviderBase(Aws::Shield::ShieldEndpointRules::GetRulesBlob(), Aws::Shield::ShieldEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Shield
}  // namespace Aws
