/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/WorkSpacesThinClientEndpointProvider.h>
#include <aws/workspaces-thin-client/internal/WorkSpacesThinClientEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKSPACESTHINCLIENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientConfiguration,
                                                   WorkSpacesThinClient::Endpoint::WorkSpacesThinClientBuiltInParameters,
                                                   WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientConfiguration,
                                                  WorkSpacesThinClient::Endpoint::WorkSpacesThinClientBuiltInParameters,
                                                  WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkSpacesThinClient {
namespace Endpoint {
WorkSpacesThinClientEndpointProvider::WorkSpacesThinClientEndpointProvider()
    : WorkSpacesThinClientDefaultEpProviderBase(Aws::WorkSpacesThinClient::WorkSpacesThinClientEndpointRules::GetRulesBlob(),
                                                Aws::WorkSpacesThinClient::WorkSpacesThinClientEndpointRules::RulesBlobSize) {}

void WorkSpacesThinClientBuiltInParameters::SetFromClientConfiguration(const WorkSpacesThinClientClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkSpacesThinClientClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkSpacesThinClientBuiltInParameters::SetFromClientConfiguration(const WorkSpacesThinClientClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkSpacesThinClientClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkSpacesThinClientBuiltInParameters::SetServiceSpecificParameters(const WorkSpacesThinClientClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkSpacesThinClient
}  // namespace Aws
