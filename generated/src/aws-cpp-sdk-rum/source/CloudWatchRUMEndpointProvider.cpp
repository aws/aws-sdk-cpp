/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/CloudWatchRUMEndpointProvider.h>
#include <aws/rum/internal/CloudWatchRUMEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDWATCHRUM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudWatchRUM::Endpoint::CloudWatchRUMClientConfiguration,
                                                   CloudWatchRUM::Endpoint::CloudWatchRUMBuiltInParameters,
                                                   CloudWatchRUM::Endpoint::CloudWatchRUMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudWatchRUM::Endpoint::CloudWatchRUMClientConfiguration,
                                                  CloudWatchRUM::Endpoint::CloudWatchRUMBuiltInParameters,
                                                  CloudWatchRUM::Endpoint::CloudWatchRUMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudWatchRUM {
namespace Endpoint {
CloudWatchRUMEndpointProvider::CloudWatchRUMEndpointProvider()
    : CloudWatchRUMDefaultEpProviderBase(Aws::CloudWatchRUM::CloudWatchRUMEndpointRules::GetRulesBlob(),
                                         Aws::CloudWatchRUM::CloudWatchRUMEndpointRules::RulesBlobSize) {}

void CloudWatchRUMBuiltInParameters::SetFromClientConfiguration(const CloudWatchRUMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudWatchRUMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudWatchRUMBuiltInParameters::SetFromClientConfiguration(const CloudWatchRUMClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudWatchRUMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudWatchRUMBuiltInParameters::SetServiceSpecificParameters(const CloudWatchRUMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudWatchRUM
}  // namespace Aws
