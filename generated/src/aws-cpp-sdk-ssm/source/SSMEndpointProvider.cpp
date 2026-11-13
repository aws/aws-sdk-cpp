/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/SSMEndpointProvider.h>
#include <aws/ssm/internal/SSMEndpointRules.h>

namespace Aws {
#ifndef AWS_SSM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSM::Endpoint::SSMClientConfiguration, SSM::Endpoint::SSMBuiltInParameters,
                                                   SSM::Endpoint::SSMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSM::Endpoint::SSMClientConfiguration, SSM::Endpoint::SSMBuiltInParameters,
                                                  SSM::Endpoint::SSMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSM {
namespace Endpoint {
SSMEndpointProvider::SSMEndpointProvider()
    : SSMDefaultEpProviderBase(Aws::SSM::SSMEndpointRules::GetRulesBlob(), Aws::SSM::SSMEndpointRules::RulesBlobSize) {}

void SSMBuiltInParameters::SetFromClientConfiguration(const SSMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSMBuiltInParameters::SetFromClientConfiguration(const SSMClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSMBuiltInParameters::SetServiceSpecificParameters(const SSMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSM
}  // namespace Aws
