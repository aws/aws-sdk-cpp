/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/ResourceExplorer2EndpointProvider.h>
#include <aws/resource-explorer-2/internal/ResourceExplorer2EndpointRules.h>

namespace Aws {
#ifndef AWS_RESOURCEEXPLORER2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ResourceExplorer2::Endpoint::ResourceExplorer2ClientConfiguration,
                                                   ResourceExplorer2::Endpoint::ResourceExplorer2BuiltInParameters,
                                                   ResourceExplorer2::Endpoint::ResourceExplorer2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ResourceExplorer2::Endpoint::ResourceExplorer2ClientConfiguration,
                                                  ResourceExplorer2::Endpoint::ResourceExplorer2BuiltInParameters,
                                                  ResourceExplorer2::Endpoint::ResourceExplorer2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ResourceExplorer2 {
namespace Endpoint {
ResourceExplorer2EndpointProvider::ResourceExplorer2EndpointProvider()
    : ResourceExplorer2DefaultEpProviderBase(Aws::ResourceExplorer2::ResourceExplorer2EndpointRules::GetRulesBlob(),
                                             Aws::ResourceExplorer2::ResourceExplorer2EndpointRules::RulesBlobSize) {}

void ResourceExplorer2BuiltInParameters::SetFromClientConfiguration(const ResourceExplorer2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ResourceExplorer2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ResourceExplorer2BuiltInParameters::SetFromClientConfiguration(const ResourceExplorer2ClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ResourceExplorer2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ResourceExplorer2BuiltInParameters::SetServiceSpecificParameters(const ResourceExplorer2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ResourceExplorer2
}  // namespace Aws
