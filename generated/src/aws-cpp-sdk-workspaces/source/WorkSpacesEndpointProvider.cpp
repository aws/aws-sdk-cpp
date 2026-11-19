/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/WorkSpacesEndpointProvider.h>
#include <aws/workspaces/internal/WorkSpacesEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKSPACES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkSpaces::Endpoint::WorkSpacesClientConfiguration,
                                                   WorkSpaces::Endpoint::WorkSpacesBuiltInParameters,
                                                   WorkSpaces::Endpoint::WorkSpacesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkSpaces::Endpoint::WorkSpacesClientConfiguration,
                                                  WorkSpaces::Endpoint::WorkSpacesBuiltInParameters,
                                                  WorkSpaces::Endpoint::WorkSpacesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkSpaces {
namespace Endpoint {
WorkSpacesEndpointProvider::WorkSpacesEndpointProvider()
    : WorkSpacesDefaultEpProviderBase(Aws::WorkSpaces::WorkSpacesEndpointRules::GetRulesBlob(),
                                      Aws::WorkSpaces::WorkSpacesEndpointRules::RulesBlobSize) {}

void WorkSpacesBuiltInParameters::SetFromClientConfiguration(const WorkSpacesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkSpacesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkSpacesBuiltInParameters::SetFromClientConfiguration(const WorkSpacesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkSpacesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkSpacesBuiltInParameters::SetServiceSpecificParameters(const WorkSpacesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkSpaces
}  // namespace Aws
