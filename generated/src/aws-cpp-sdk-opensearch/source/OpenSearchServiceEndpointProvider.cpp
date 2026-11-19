/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/OpenSearchServiceEndpointProvider.h>
#include <aws/opensearch/internal/OpenSearchServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_OPENSEARCHSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<OpenSearchService::Endpoint::OpenSearchServiceClientConfiguration,
                                                   OpenSearchService::Endpoint::OpenSearchServiceBuiltInParameters,
                                                   OpenSearchService::Endpoint::OpenSearchServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<OpenSearchService::Endpoint::OpenSearchServiceClientConfiguration,
                                                  OpenSearchService::Endpoint::OpenSearchServiceBuiltInParameters,
                                                  OpenSearchService::Endpoint::OpenSearchServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace OpenSearchService {
namespace Endpoint {
OpenSearchServiceEndpointProvider::OpenSearchServiceEndpointProvider()
    : OpenSearchServiceDefaultEpProviderBase(Aws::OpenSearchService::OpenSearchServiceEndpointRules::GetRulesBlob(),
                                             Aws::OpenSearchService::OpenSearchServiceEndpointRules::RulesBlobSize) {}

void OpenSearchServiceBuiltInParameters::SetFromClientConfiguration(const OpenSearchServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OpenSearchServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OpenSearchServiceBuiltInParameters::SetFromClientConfiguration(const OpenSearchServiceClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OpenSearchServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OpenSearchServiceBuiltInParameters::SetServiceSpecificParameters(const OpenSearchServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace OpenSearchService
}  // namespace Aws
