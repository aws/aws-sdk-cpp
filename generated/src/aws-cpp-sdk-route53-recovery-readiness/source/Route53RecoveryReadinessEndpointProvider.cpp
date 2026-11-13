/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <aws/route53-recovery-readiness/internal/Route53RecoveryReadinessEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53RECOVERYREADINESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientConfiguration,
                                                   Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessBuiltInParameters,
                                                   Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientConfiguration,
                                                  Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessBuiltInParameters,
                                                  Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53RecoveryReadiness {
namespace Endpoint {
Route53RecoveryReadinessEndpointProvider::Route53RecoveryReadinessEndpointProvider()
    : Route53RecoveryReadinessDefaultEpProviderBase(Aws::Route53RecoveryReadiness::Route53RecoveryReadinessEndpointRules::GetRulesBlob(),
                                                    Aws::Route53RecoveryReadiness::Route53RecoveryReadinessEndpointRules::RulesBlobSize) {}

void Route53RecoveryReadinessBuiltInParameters::SetFromClientConfiguration(const Route53RecoveryReadinessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53RecoveryReadinessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53RecoveryReadinessBuiltInParameters::SetFromClientConfiguration(const Route53RecoveryReadinessClientConfiguration& config,
                                                                           const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53RecoveryReadinessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53RecoveryReadinessBuiltInParameters::SetServiceSpecificParameters(const Route53RecoveryReadinessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
