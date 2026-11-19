/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/SimpleDBEndpointProvider.h>
#include <aws/sdb/internal/SimpleDBEndpointRules.h>

namespace Aws {
#ifndef AWS_SIMPLEDB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SimpleDB::Endpoint::SimpleDBClientConfiguration,
                                                   SimpleDB::Endpoint::SimpleDBBuiltInParameters,
                                                   SimpleDB::Endpoint::SimpleDBClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<SimpleDB::Endpoint::SimpleDBClientConfiguration,
                                                      SimpleDB::Endpoint::SimpleDBBuiltInParameters,
                                                      SimpleDB::Endpoint::SimpleDBClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SimpleDB {
namespace Endpoint {
SimpleDBEndpointProvider::SimpleDBEndpointProvider()
    : SimpleDBDefaultEpProviderBase(Aws::SimpleDB::SimpleDBEndpointRules::GetRulesBlob(),
                                    Aws::SimpleDB::SimpleDBEndpointRules::RulesBlobSize) {}

void SimpleDBBuiltInParameters::SetFromClientConfiguration(const SimpleDBClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SimpleDBClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SimpleDBBuiltInParameters::SetFromClientConfiguration(const SimpleDBClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SimpleDBClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SimpleDBBuiltInParameters::SetServiceSpecificParameters(const SimpleDBClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SimpleDB
}  // namespace Aws
