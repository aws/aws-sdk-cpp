/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointProvider.h>
#include <aws/resourcegroupstaggingapi/internal/ResourceGroupsTaggingAPIEndpointRules.h>

namespace Aws {
#ifndef AWS_RESOURCEGROUPSTAGGINGAPI_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientConfiguration,
                                                   ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIBuiltInParameters,
                                                   ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientConfiguration,
                                                  ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIBuiltInParameters,
                                                  ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ResourceGroupsTaggingAPI {
namespace Endpoint {
ResourceGroupsTaggingAPIEndpointProvider::ResourceGroupsTaggingAPIEndpointProvider()
    : ResourceGroupsTaggingAPIDefaultEpProviderBase(Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIEndpointRules::GetRulesBlob(),
                                                    Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIEndpointRules::RulesBlobSize) {}

void ResourceGroupsTaggingAPIBuiltInParameters::SetFromClientConfiguration(const ResourceGroupsTaggingAPIClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ResourceGroupsTaggingAPIClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ResourceGroupsTaggingAPIBuiltInParameters::SetFromClientConfiguration(const ResourceGroupsTaggingAPIClientConfiguration& config,
                                                                           const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ResourceGroupsTaggingAPIClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ResourceGroupsTaggingAPIBuiltInParameters::SetServiceSpecificParameters(const ResourceGroupsTaggingAPIClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
