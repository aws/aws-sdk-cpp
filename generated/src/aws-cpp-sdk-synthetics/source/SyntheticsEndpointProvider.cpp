/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/SyntheticsEndpointProvider.h>
#include <aws/synthetics/internal/SyntheticsEndpointRules.h>

namespace Aws {
#ifndef AWS_SYNTHETICS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Synthetics::Endpoint::SyntheticsClientConfiguration,
                                                   Synthetics::Endpoint::SyntheticsBuiltInParameters,
                                                   Synthetics::Endpoint::SyntheticsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Synthetics::Endpoint::SyntheticsClientConfiguration,
                                                  Synthetics::Endpoint::SyntheticsBuiltInParameters,
                                                  Synthetics::Endpoint::SyntheticsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Synthetics {
namespace Endpoint {
SyntheticsEndpointProvider::SyntheticsEndpointProvider()
    : SyntheticsDefaultEpProviderBase(Aws::Synthetics::SyntheticsEndpointRules::GetRulesBlob(),
                                      Aws::Synthetics::SyntheticsEndpointRules::RulesBlobSize) {}

void SyntheticsBuiltInParameters::SetFromClientConfiguration(const SyntheticsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SyntheticsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SyntheticsBuiltInParameters::SetFromClientConfiguration(const SyntheticsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SyntheticsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SyntheticsBuiltInParameters::SetServiceSpecificParameters(const SyntheticsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Synthetics
}  // namespace Aws
