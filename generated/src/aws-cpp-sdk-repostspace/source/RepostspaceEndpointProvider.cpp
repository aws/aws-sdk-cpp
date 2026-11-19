/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/RepostspaceEndpointProvider.h>
#include <aws/repostspace/internal/RepostspaceEndpointRules.h>

namespace Aws {
#ifndef AWS_REPOSTSPACE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<repostspace::Endpoint::RepostspaceClientConfiguration,
                                                   repostspace::Endpoint::RepostspaceBuiltInParameters,
                                                   repostspace::Endpoint::RepostspaceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<repostspace::Endpoint::RepostspaceClientConfiguration,
                                                  repostspace::Endpoint::RepostspaceBuiltInParameters,
                                                  repostspace::Endpoint::RepostspaceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace repostspace {
namespace Endpoint {
RepostspaceEndpointProvider::RepostspaceEndpointProvider()
    : RepostspaceDefaultEpProviderBase(Aws::repostspace::RepostspaceEndpointRules::GetRulesBlob(),
                                       Aws::repostspace::RepostspaceEndpointRules::RulesBlobSize) {}

void RepostspaceBuiltInParameters::SetFromClientConfiguration(const RepostspaceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RepostspaceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RepostspaceBuiltInParameters::SetFromClientConfiguration(const RepostspaceClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RepostspaceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RepostspaceBuiltInParameters::SetServiceSpecificParameters(const RepostspaceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace repostspace
}  // namespace Aws
