/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simpledbv2/SimpleDBv2EndpointProvider.h>
#include <aws/simpledbv2/internal/SimpleDBv2EndpointRules.h>

namespace Aws {
#ifndef AWS_SIMPLEDBV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SimpleDBv2::Endpoint::SimpleDBv2ClientConfiguration,
                                                   SimpleDBv2::Endpoint::SimpleDBv2BuiltInParameters,
                                                   SimpleDBv2::Endpoint::SimpleDBv2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SimpleDBv2::Endpoint::SimpleDBv2ClientConfiguration,
                                                  SimpleDBv2::Endpoint::SimpleDBv2BuiltInParameters,
                                                  SimpleDBv2::Endpoint::SimpleDBv2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SimpleDBv2 {
namespace Endpoint {
SimpleDBv2EndpointProvider::SimpleDBv2EndpointProvider()
    : SimpleDBv2DefaultEpProviderBase(Aws::SimpleDBv2::SimpleDBv2EndpointRules::GetRulesBlob(),
                                      Aws::SimpleDBv2::SimpleDBv2EndpointRules::RulesBlobSize) {}

void SimpleDBv2BuiltInParameters::SetFromClientConfiguration(const SimpleDBv2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SimpleDBv2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SimpleDBv2BuiltInParameters::SetFromClientConfiguration(const SimpleDBv2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SimpleDBv2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SimpleDBv2BuiltInParameters::SetServiceSpecificParameters(const SimpleDBv2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SimpleDBv2
}  // namespace Aws
