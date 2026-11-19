/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/SSMQuickSetupEndpointProvider.h>
#include <aws/ssm-quicksetup/internal/SSMQuickSetupEndpointRules.h>

namespace Aws {
#ifndef AWS_SSMQUICKSETUP_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSMQuickSetup::Endpoint::SSMQuickSetupClientConfiguration,
                                                   SSMQuickSetup::Endpoint::SSMQuickSetupBuiltInParameters,
                                                   SSMQuickSetup::Endpoint::SSMQuickSetupClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSMQuickSetup::Endpoint::SSMQuickSetupClientConfiguration,
                                                  SSMQuickSetup::Endpoint::SSMQuickSetupBuiltInParameters,
                                                  SSMQuickSetup::Endpoint::SSMQuickSetupClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSMQuickSetup {
namespace Endpoint {
SSMQuickSetupEndpointProvider::SSMQuickSetupEndpointProvider()
    : SSMQuickSetupDefaultEpProviderBase(Aws::SSMQuickSetup::SSMQuickSetupEndpointRules::GetRulesBlob(),
                                         Aws::SSMQuickSetup::SSMQuickSetupEndpointRules::RulesBlobSize) {}

void SSMQuickSetupBuiltInParameters::SetFromClientConfiguration(const SSMQuickSetupClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSMQuickSetupClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSMQuickSetupBuiltInParameters::SetFromClientConfiguration(const SSMQuickSetupClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSMQuickSetupClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSMQuickSetupBuiltInParameters::SetServiceSpecificParameters(const SSMQuickSetupClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSMQuickSetup
}  // namespace Aws
