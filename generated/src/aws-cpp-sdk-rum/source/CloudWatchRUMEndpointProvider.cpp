/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/CloudWatchRUMEndpointProvider.h>
#include <aws/rum/internal/CloudWatchRUMEndpointRules.h>

namespace Aws {
namespace CloudWatchRUM {
namespace Endpoint {
CloudWatchRUMEndpointProvider::CloudWatchRUMEndpointProvider()
    : CloudWatchRUMDefaultEpProviderBase(Aws::CloudWatchRUM::CloudWatchRUMEndpointRules::GetRulesBlob(),
                                         Aws::CloudWatchRUM::CloudWatchRUMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudWatchRUM
}  // namespace Aws
