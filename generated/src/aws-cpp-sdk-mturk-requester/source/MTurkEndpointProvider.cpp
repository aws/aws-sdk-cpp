/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/MTurkEndpointProvider.h>
#include <aws/mturk-requester/internal/MTurkEndpointRules.h>

namespace Aws {
namespace MTurk {
namespace Endpoint {
MTurkEndpointProvider::MTurkEndpointProvider()
    : MTurkDefaultEpProviderBase(Aws::MTurk::MTurkEndpointRules::GetRulesBlob(), Aws::MTurk::MTurkEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MTurk
}  // namespace Aws
