/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <aws/securitylake/internal/SecurityLakeEndpointRules.h>

namespace Aws {
#ifndef AWS_SECURITYLAKE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SecurityLake::Endpoint::SecurityLakeClientConfiguration,
                                                   SecurityLake::Endpoint::SecurityLakeBuiltInParameters,
                                                   SecurityLake::Endpoint::SecurityLakeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SecurityLake::Endpoint::SecurityLakeClientConfiguration,
                                                  SecurityLake::Endpoint::SecurityLakeBuiltInParameters,
                                                  SecurityLake::Endpoint::SecurityLakeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SecurityLake {
namespace Endpoint {
SecurityLakeEndpointProvider::SecurityLakeEndpointProvider()
    : SecurityLakeDefaultEpProviderBase(Aws::SecurityLake::SecurityLakeEndpointRules::GetRulesBlob(),
                                        Aws::SecurityLake::SecurityLakeEndpointRules::RulesBlobSize) {}

void SecurityLakeBuiltInParameters::SetFromClientConfiguration(const SecurityLakeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SecurityLakeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SecurityLakeBuiltInParameters::SetFromClientConfiguration(const SecurityLakeClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SecurityLakeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SecurityLakeBuiltInParameters::SetServiceSpecificParameters(const SecurityLakeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SecurityLake
}  // namespace Aws
