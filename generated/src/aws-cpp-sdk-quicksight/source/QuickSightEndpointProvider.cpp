/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/internal/QuickSightEndpointRules.h>

namespace Aws {
#ifndef AWS_QUICKSIGHT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<QuickSight::Endpoint::QuickSightClientConfiguration,
                                                   QuickSight::Endpoint::QuickSightBuiltInParameters,
                                                   QuickSight::Endpoint::QuickSightClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<QuickSight::Endpoint::QuickSightClientConfiguration,
                                                  QuickSight::Endpoint::QuickSightBuiltInParameters,
                                                  QuickSight::Endpoint::QuickSightClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QuickSight {
namespace Endpoint {
QuickSightEndpointProvider::QuickSightEndpointProvider()
    : QuickSightDefaultEpProviderBase(Aws::QuickSight::QuickSightEndpointRules::GetRulesBlob(),
                                      Aws::QuickSight::QuickSightEndpointRules::RulesBlobSize) {}

void QuickSightBuiltInParameters::SetFromClientConfiguration(const QuickSightClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QuickSightClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void QuickSightBuiltInParameters::SetFromClientConfiguration(const QuickSightClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QuickSightClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void QuickSightBuiltInParameters::SetServiceSpecificParameters(const QuickSightClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace QuickSight
}  // namespace Aws
