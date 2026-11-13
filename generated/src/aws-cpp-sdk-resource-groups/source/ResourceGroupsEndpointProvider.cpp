/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/ResourceGroupsEndpointProvider.h>
#include <aws/resource-groups/internal/ResourceGroupsEndpointRules.h>

namespace Aws {
#ifndef AWS_RESOURCEGROUPS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ResourceGroups::Endpoint::ResourceGroupsClientConfiguration,
                                                   ResourceGroups::Endpoint::ResourceGroupsBuiltInParameters,
                                                   ResourceGroups::Endpoint::ResourceGroupsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ResourceGroups::Endpoint::ResourceGroupsClientConfiguration,
                                                  ResourceGroups::Endpoint::ResourceGroupsBuiltInParameters,
                                                  ResourceGroups::Endpoint::ResourceGroupsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ResourceGroups {
namespace Endpoint {
ResourceGroupsEndpointProvider::ResourceGroupsEndpointProvider()
    : ResourceGroupsDefaultEpProviderBase(Aws::ResourceGroups::ResourceGroupsEndpointRules::GetRulesBlob(),
                                          Aws::ResourceGroups::ResourceGroupsEndpointRules::RulesBlobSize) {}

void ResourceGroupsBuiltInParameters::SetFromClientConfiguration(const ResourceGroupsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ResourceGroupsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ResourceGroupsBuiltInParameters::SetFromClientConfiguration(const ResourceGroupsClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ResourceGroupsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ResourceGroupsBuiltInParameters::SetServiceSpecificParameters(const ResourceGroupsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ResourceGroups
}  // namespace Aws
