/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointProvider.h>
#include <aws/route53-recovery-control-config/internal/Route53RecoveryControlConfigEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53RECOVERYCONTROLCONFIG_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientConfiguration,
    Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigBuiltInParameters,
    Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientConfiguration,
    Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigBuiltInParameters,
    Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53RecoveryControlConfig {
namespace Endpoint {
Route53RecoveryControlConfigEndpointProvider::Route53RecoveryControlConfigEndpointProvider()
    : Route53RecoveryControlConfigDefaultEpProviderBase(
          Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigEndpointRules::GetRulesBlob(),
          Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigEndpointRules::RulesBlobSize) {}

void Route53RecoveryControlConfigBuiltInParameters::SetFromClientConfiguration(
    const Route53RecoveryControlConfigClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53RecoveryControlConfigClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53RecoveryControlConfigBuiltInParameters::SetFromClientConfiguration(
    const Route53RecoveryControlConfigClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53RecoveryControlConfigClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void Route53RecoveryControlConfigBuiltInParameters::SetServiceSpecificParameters(
    const Route53RecoveryControlConfigClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
