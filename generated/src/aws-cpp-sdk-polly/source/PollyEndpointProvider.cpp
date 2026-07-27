/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/PollyEndpointProvider.h>
#include <aws/polly/internal/PollyEndpointRules.h>

namespace Aws {
namespace Polly {
namespace Endpoint {
PollyEndpointProvider::PollyEndpointProvider()
    : PollyDefaultEpProviderBase(Aws::Polly::PollyEndpointRules::GetRulesBlob(), Aws::Polly::PollyEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Polly
}  // namespace Aws
