/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/MemoryDBEndpointProvider.h>
#include <aws/memorydb/internal/MemoryDBEndpointRules.h>

namespace Aws {
#ifndef AWS_MEMORYDB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MemoryDB::Endpoint::MemoryDBClientConfiguration,
                                                   MemoryDB::Endpoint::MemoryDBBuiltInParameters,
                                                   MemoryDB::Endpoint::MemoryDBClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MemoryDB::Endpoint::MemoryDBClientConfiguration,
                                                  MemoryDB::Endpoint::MemoryDBBuiltInParameters,
                                                  MemoryDB::Endpoint::MemoryDBClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MemoryDB {
namespace Endpoint {
MemoryDBEndpointProvider::MemoryDBEndpointProvider()
    : MemoryDBDefaultEpProviderBase(Aws::MemoryDB::MemoryDBEndpointRules::GetRulesBlob(),
                                    Aws::MemoryDB::MemoryDBEndpointRules::RulesBlobSize) {}

void MemoryDBBuiltInParameters::SetFromClientConfiguration(const MemoryDBClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MemoryDBClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MemoryDBBuiltInParameters::SetFromClientConfiguration(const MemoryDBClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MemoryDBClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MemoryDBBuiltInParameters::SetServiceSpecificParameters(const MemoryDBClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MemoryDB
}  // namespace Aws
