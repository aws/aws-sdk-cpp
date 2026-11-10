/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/WorkSpacesWebEndpointProvider.h>
#include <aws/workspaces-web/internal/WorkSpacesWebEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKSPACESWEB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkSpacesWeb::Endpoint::WorkSpacesWebClientConfiguration,
                                                   WorkSpacesWeb::Endpoint::WorkSpacesWebBuiltInParameters,
                                                   WorkSpacesWeb::Endpoint::WorkSpacesWebClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkSpacesWeb::Endpoint::WorkSpacesWebClientConfiguration,
                                                  WorkSpacesWeb::Endpoint::WorkSpacesWebBuiltInParameters,
                                                  WorkSpacesWeb::Endpoint::WorkSpacesWebClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkSpacesWeb {
namespace Endpoint {
WorkSpacesWebEndpointProvider::WorkSpacesWebEndpointProvider()
    : WorkSpacesWebDefaultEpProviderBase(Aws::WorkSpacesWeb::WorkSpacesWebEndpointRules::GetRulesBlob(),
                                         Aws::WorkSpacesWeb::WorkSpacesWebEndpointRules::RulesBlobSize) {}

void WorkSpacesWebBuiltInParameters::SetFromClientConfiguration(const WorkSpacesWebClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkSpacesWebClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkSpacesWebBuiltInParameters::SetFromClientConfiguration(const WorkSpacesWebClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkSpacesWebClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkSpacesWebBuiltInParameters::SetServiceSpecificParameters(const WorkSpacesWebClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkSpacesWeb
}  // namespace Aws
