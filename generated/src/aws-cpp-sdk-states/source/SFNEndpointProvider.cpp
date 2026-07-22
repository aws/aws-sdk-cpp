/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/SFNEndpointProvider.h>
#include <aws/states/internal/SFNEndpointRules.h>

namespace Aws {
namespace SFN {
namespace Endpoint {
SFNEndpointProvider::SFNEndpointProvider()
    : SFNDefaultEpProviderBase(Aws::SFN::SFNEndpointRules::GetRulesBlob(), Aws::SFN::SFNEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SFN
}  // namespace Aws
