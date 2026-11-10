/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/WorkspacesInstancesEndpointProvider.h>
#include <aws/workspaces-instances/internal/WorkspacesInstancesEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKSPACESINSTANCES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkspacesInstances::Endpoint::WorkspacesInstancesClientConfiguration,
                                                   WorkspacesInstances::Endpoint::WorkspacesInstancesBuiltInParameters,
                                                   WorkspacesInstances::Endpoint::WorkspacesInstancesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkspacesInstances::Endpoint::WorkspacesInstancesClientConfiguration,
                                                  WorkspacesInstances::Endpoint::WorkspacesInstancesBuiltInParameters,
                                                  WorkspacesInstances::Endpoint::WorkspacesInstancesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkspacesInstances {
namespace Endpoint {
WorkspacesInstancesEndpointProvider::WorkspacesInstancesEndpointProvider()
    : WorkspacesInstancesDefaultEpProviderBase(Aws::WorkspacesInstances::WorkspacesInstancesEndpointRules::GetRulesBlob(),
                                               Aws::WorkspacesInstances::WorkspacesInstancesEndpointRules::RulesBlobSize) {}

void WorkspacesInstancesBuiltInParameters::SetFromClientConfiguration(const WorkspacesInstancesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkspacesInstancesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkspacesInstancesBuiltInParameters::SetFromClientConfiguration(const WorkspacesInstancesClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkspacesInstancesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkspacesInstancesBuiltInParameters::SetServiceSpecificParameters(const WorkspacesInstancesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkspacesInstances
}  // namespace Aws
