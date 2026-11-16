/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchmemory/OpenSearchMemoryEndpointProvider.h>
#include <aws/opensearchmemory/internal/OpenSearchMemoryEndpointRules.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Endpoint {
OpenSearchMemoryEndpointProvider::OpenSearchMemoryEndpointProvider()
    : OpenSearchMemoryDefaultEpProviderBase(Aws::OpenSearchMemory::OpenSearchMemoryEndpointRules::GetRulesBlob(),
                                            Aws::OpenSearchMemory::OpenSearchMemoryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace OpenSearchMemory
}  // namespace Aws
