/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/StorageGatewayEndpointProvider.h>
#include <aws/storagegateway/internal/StorageGatewayEndpointRules.h>

namespace Aws {
#ifndef AWS_STORAGEGATEWAY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<StorageGateway::Endpoint::StorageGatewayClientConfiguration,
                                                   StorageGateway::Endpoint::StorageGatewayBuiltInParameters,
                                                   StorageGateway::Endpoint::StorageGatewayClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<StorageGateway::Endpoint::StorageGatewayClientConfiguration,
                                                  StorageGateway::Endpoint::StorageGatewayBuiltInParameters,
                                                  StorageGateway::Endpoint::StorageGatewayClientContextParameters>;
}  // namespace Endpoint
#endif

namespace StorageGateway {
namespace Endpoint {
StorageGatewayEndpointProvider::StorageGatewayEndpointProvider()
    : StorageGatewayDefaultEpProviderBase(Aws::StorageGateway::StorageGatewayEndpointRules::GetRulesBlob(),
                                          Aws::StorageGateway::StorageGatewayEndpointRules::RulesBlobSize) {}

void StorageGatewayBuiltInParameters::SetFromClientConfiguration(const StorageGatewayClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const StorageGatewayClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void StorageGatewayBuiltInParameters::SetFromClientConfiguration(const StorageGatewayClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const StorageGatewayClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void StorageGatewayBuiltInParameters::SetServiceSpecificParameters(const StorageGatewayClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace StorageGateway
}  // namespace Aws
