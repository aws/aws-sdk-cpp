/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <aws/snow-device-management/internal/SnowDeviceManagementEndpointRules.h>

namespace Aws {
namespace SnowDeviceManagement {
namespace Endpoint {
SnowDeviceManagementEndpointProvider::SnowDeviceManagementEndpointProvider()
    : SnowDeviceManagementDefaultEpProviderBase(Aws::SnowDeviceManagement::SnowDeviceManagementEndpointRules::GetRulesBlob(),
                                                Aws::SnowDeviceManagement::SnowDeviceManagementEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SnowDeviceManagement
}  // namespace Aws
