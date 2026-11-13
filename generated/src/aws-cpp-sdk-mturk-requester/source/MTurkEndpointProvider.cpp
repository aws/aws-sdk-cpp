/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/MTurkEndpointProvider.h>
#include <aws/mturk-requester/internal/MTurkEndpointRules.h>

namespace Aws {
#ifndef AWS_MTURK_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MTurk::Endpoint::MTurkClientConfiguration, MTurk::Endpoint::MTurkBuiltInParameters,
                                                   MTurk::Endpoint::MTurkClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MTurk::Endpoint::MTurkClientConfiguration, MTurk::Endpoint::MTurkBuiltInParameters,
                                                  MTurk::Endpoint::MTurkClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MTurk {
namespace Endpoint {
MTurkEndpointProvider::MTurkEndpointProvider()
    : MTurkDefaultEpProviderBase(Aws::MTurk::MTurkEndpointRules::GetRulesBlob(), Aws::MTurk::MTurkEndpointRules::RulesBlobSize) {}

void MTurkBuiltInParameters::SetFromClientConfiguration(const MTurkClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MTurkClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MTurkBuiltInParameters::SetFromClientConfiguration(const MTurkClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MTurkClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MTurkBuiltInParameters::SetServiceSpecificParameters(const MTurkClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MTurk
}  // namespace Aws
