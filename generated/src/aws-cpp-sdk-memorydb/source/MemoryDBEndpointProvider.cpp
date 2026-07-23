/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/MemoryDBEndpointProvider.h>
#include <aws/memorydb/internal/MemoryDBEndpointRules.h>

namespace Aws {
namespace MemoryDB {
namespace Endpoint {
MemoryDBEndpointProvider::MemoryDBEndpointProvider()
    : MemoryDBDefaultEpProviderBase(Aws::MemoryDB::MemoryDBEndpointRules::GetRulesBlob(),
                                    Aws::MemoryDB::MemoryDBEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MemoryDB
}  // namespace Aws
