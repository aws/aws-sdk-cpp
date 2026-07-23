/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/SyntheticsEndpointProvider.h>
#include <aws/synthetics/internal/SyntheticsEndpointRules.h>

namespace Aws {
namespace Synthetics {
namespace Endpoint {
SyntheticsEndpointProvider::SyntheticsEndpointProvider()
    : SyntheticsDefaultEpProviderBase(Aws::Synthetics::SyntheticsEndpointRules::GetRulesBlob(),
                                      Aws::Synthetics::SyntheticsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Synthetics
}  // namespace Aws
