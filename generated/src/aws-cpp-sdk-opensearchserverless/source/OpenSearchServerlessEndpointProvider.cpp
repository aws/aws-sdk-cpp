/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/OpenSearchServerlessEndpointProvider.h>
#include <aws/opensearchserverless/internal/OpenSearchServerlessEndpointRules.h>

namespace Aws {
#ifndef AWS_OPENSEARCHSERVERLESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<OpenSearchServerless::Endpoint::OpenSearchServerlessClientConfiguration,
                                                   OpenSearchServerless::Endpoint::OpenSearchServerlessBuiltInParameters,
                                                   OpenSearchServerless::Endpoint::OpenSearchServerlessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<OpenSearchServerless::Endpoint::OpenSearchServerlessClientConfiguration,
                                                  OpenSearchServerless::Endpoint::OpenSearchServerlessBuiltInParameters,
                                                  OpenSearchServerless::Endpoint::OpenSearchServerlessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace OpenSearchServerless {
namespace Endpoint {
OpenSearchServerlessEndpointProvider::OpenSearchServerlessEndpointProvider()
    : OpenSearchServerlessDefaultEpProviderBase(Aws::OpenSearchServerless::OpenSearchServerlessEndpointRules::GetRulesBlob(),
                                                Aws::OpenSearchServerless::OpenSearchServerlessEndpointRules::RulesBlobSize) {}

void OpenSearchServerlessBuiltInParameters::SetFromClientConfiguration(const OpenSearchServerlessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OpenSearchServerlessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OpenSearchServerlessBuiltInParameters::SetFromClientConfiguration(const OpenSearchServerlessClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OpenSearchServerlessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OpenSearchServerlessBuiltInParameters::SetServiceSpecificParameters(const OpenSearchServerlessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace OpenSearchServerless
}  // namespace Aws
