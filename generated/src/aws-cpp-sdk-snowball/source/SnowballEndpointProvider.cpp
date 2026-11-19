/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/SnowballEndpointProvider.h>
#include <aws/snowball/internal/SnowballEndpointRules.h>

namespace Aws {
#ifndef AWS_SNOWBALL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Snowball::Endpoint::SnowballClientConfiguration,
                                                   Snowball::Endpoint::SnowballBuiltInParameters,
                                                   Snowball::Endpoint::SnowballClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Snowball::Endpoint::SnowballClientConfiguration,
                                                  Snowball::Endpoint::SnowballBuiltInParameters,
                                                  Snowball::Endpoint::SnowballClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Snowball {
namespace Endpoint {
SnowballEndpointProvider::SnowballEndpointProvider()
    : SnowballDefaultEpProviderBase(Aws::Snowball::SnowballEndpointRules::GetRulesBlob(),
                                    Aws::Snowball::SnowballEndpointRules::RulesBlobSize) {}

void SnowballBuiltInParameters::SetFromClientConfiguration(const SnowballClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SnowballClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SnowballBuiltInParameters::SetFromClientConfiguration(const SnowballClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SnowballClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SnowballBuiltInParameters::SetServiceSpecificParameters(const SnowballClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Snowball
}  // namespace Aws
