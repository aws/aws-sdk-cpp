/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointProvider.h>
#include <aws/sagemaker-edge/internal/SagemakerEdgeManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKEREDGEMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientConfiguration,
                                                   SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerBuiltInParameters,
                                                   SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientConfiguration,
                                                  SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerBuiltInParameters,
                                                  SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SagemakerEdgeManager {
namespace Endpoint {
SagemakerEdgeManagerEndpointProvider::SagemakerEdgeManagerEndpointProvider()
    : SagemakerEdgeManagerDefaultEpProviderBase(Aws::SagemakerEdgeManager::SagemakerEdgeManagerEndpointRules::GetRulesBlob(),
                                                Aws::SagemakerEdgeManager::SagemakerEdgeManagerEndpointRules::RulesBlobSize) {}

void SagemakerEdgeManagerBuiltInParameters::SetFromClientConfiguration(const SagemakerEdgeManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SagemakerEdgeManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SagemakerEdgeManagerBuiltInParameters::SetFromClientConfiguration(const SagemakerEdgeManagerClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SagemakerEdgeManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SagemakerEdgeManagerBuiltInParameters::SetServiceSpecificParameters(const SagemakerEdgeManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SagemakerEdgeManager
}  // namespace Aws
