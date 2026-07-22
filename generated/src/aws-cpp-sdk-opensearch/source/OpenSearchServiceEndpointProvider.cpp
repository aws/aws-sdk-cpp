/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/OpenSearchServiceEndpointProvider.h>
#include <aws/opensearch/internal/OpenSearchServiceEndpointRules.h>

namespace Aws {
namespace OpenSearchService {
namespace Endpoint {
OpenSearchServiceEndpointProvider::OpenSearchServiceEndpointProvider()
    : OpenSearchServiceDefaultEpProviderBase(Aws::OpenSearchService::OpenSearchServiceEndpointRules::GetRulesBlob(),
                                             Aws::OpenSearchService::OpenSearchServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace OpenSearchService
}  // namespace Aws
