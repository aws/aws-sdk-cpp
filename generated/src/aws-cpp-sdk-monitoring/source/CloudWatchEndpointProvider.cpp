/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/CloudWatchEndpointProvider.h>
#include <aws/monitoring/internal/CloudWatchEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDWATCH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudWatch::Endpoint::CloudWatchClientConfiguration,
                                                   CloudWatch::Endpoint::CloudWatchBuiltInParameters,
                                                   CloudWatch::Endpoint::CloudWatchClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudWatch::Endpoint::CloudWatchClientConfiguration,
                                                  CloudWatch::Endpoint::CloudWatchBuiltInParameters,
                                                  CloudWatch::Endpoint::CloudWatchClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudWatch {
namespace Endpoint {
CloudWatchEndpointProvider::CloudWatchEndpointProvider()
    : CloudWatchDefaultEpProviderBase(Aws::CloudWatch::CloudWatchEndpointRules::GetRulesBlob(),
                                      Aws::CloudWatch::CloudWatchEndpointRules::RulesBlobSize) {}

void CloudWatchBuiltInParameters::SetFromClientConfiguration(const CloudWatchClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudWatchClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudWatchBuiltInParameters::SetFromClientConfiguration(const CloudWatchClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudWatchClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudWatchBuiltInParameters::SetServiceSpecificParameters(const CloudWatchClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudWatch
}  // namespace Aws
