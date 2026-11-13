/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <aws/snow-device-management/internal/SnowDeviceManagementEndpointRules.h>

namespace Aws {
#ifndef AWS_SNOWDEVICEMANAGEMENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SnowDeviceManagement::Endpoint::SnowDeviceManagementClientConfiguration,
                                                   SnowDeviceManagement::Endpoint::SnowDeviceManagementBuiltInParameters,
                                                   SnowDeviceManagement::Endpoint::SnowDeviceManagementClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SnowDeviceManagement::Endpoint::SnowDeviceManagementClientConfiguration,
                                                  SnowDeviceManagement::Endpoint::SnowDeviceManagementBuiltInParameters,
                                                  SnowDeviceManagement::Endpoint::SnowDeviceManagementClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SnowDeviceManagement {
namespace Endpoint {
SnowDeviceManagementEndpointProvider::SnowDeviceManagementEndpointProvider()
    : SnowDeviceManagementDefaultEpProviderBase(Aws::SnowDeviceManagement::SnowDeviceManagementEndpointRules::GetRulesBlob(),
                                                Aws::SnowDeviceManagement::SnowDeviceManagementEndpointRules::RulesBlobSize) {}

void SnowDeviceManagementBuiltInParameters::SetFromClientConfiguration(const SnowDeviceManagementClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SnowDeviceManagementClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SnowDeviceManagementBuiltInParameters::SetFromClientConfiguration(const SnowDeviceManagementClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SnowDeviceManagementClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SnowDeviceManagementBuiltInParameters::SetServiceSpecificParameters(const SnowDeviceManagementClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SnowDeviceManagement
}  // namespace Aws
