/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/SupportEndpointProvider.h>
#include <aws/support/internal/SupportEndpointRules.h>

namespace Aws {
namespace Support {
namespace Endpoint {
SupportEndpointProvider::SupportEndpointProvider()
    : SupportDefaultEpProviderBase(Aws::Support::SupportEndpointRules::GetRulesBlob(), Aws::Support::SupportEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Support
}  // namespace Aws
