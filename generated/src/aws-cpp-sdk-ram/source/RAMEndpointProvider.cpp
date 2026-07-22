/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/RAMEndpointProvider.h>
#include <aws/ram/internal/RAMEndpointRules.h>

namespace Aws {
namespace RAM {
namespace Endpoint {
RAMEndpointProvider::RAMEndpointProvider()
    : RAMDefaultEpProviderBase(Aws::RAM::RAMEndpointRules::GetRulesBlob(), Aws::RAM::RAMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RAM
}  // namespace Aws
