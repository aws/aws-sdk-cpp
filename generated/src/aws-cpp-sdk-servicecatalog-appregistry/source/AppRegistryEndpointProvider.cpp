/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/AppRegistryEndpointProvider.h>
#include <aws/servicecatalog-appregistry/internal/AppRegistryEndpointRules.h>

namespace Aws {
namespace AppRegistry {
namespace Endpoint {
AppRegistryEndpointProvider::AppRegistryEndpointProvider()
    : AppRegistryDefaultEpProviderBase(Aws::AppRegistry::AppRegistryEndpointRules::GetRulesBlob(),
                                       Aws::AppRegistry::AppRegistryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppRegistry
}  // namespace Aws
