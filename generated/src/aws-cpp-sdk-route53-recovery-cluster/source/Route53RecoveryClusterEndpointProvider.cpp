/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointProvider.h>
#include <aws/route53-recovery-cluster/internal/Route53RecoveryClusterEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53RECOVERYCLUSTER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientConfiguration,
                                                   Route53RecoveryCluster::Endpoint::Route53RecoveryClusterBuiltInParameters,
                                                   Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientConfiguration,
                                                  Route53RecoveryCluster::Endpoint::Route53RecoveryClusterBuiltInParameters,
                                                  Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53RecoveryCluster {
namespace Endpoint {
Route53RecoveryClusterEndpointProvider::Route53RecoveryClusterEndpointProvider()
    : Route53RecoveryClusterDefaultEpProviderBase(Aws::Route53RecoveryCluster::Route53RecoveryClusterEndpointRules::GetRulesBlob(),
                                                  Aws::Route53RecoveryCluster::Route53RecoveryClusterEndpointRules::RulesBlobSize) {}

void Route53RecoveryClusterBuiltInParameters::SetFromClientConfiguration(const Route53RecoveryClusterClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53RecoveryClusterClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53RecoveryClusterBuiltInParameters::SetFromClientConfiguration(const Route53RecoveryClusterClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53RecoveryClusterClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53RecoveryClusterBuiltInParameters::SetServiceSpecificParameters(const Route53RecoveryClusterClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53RecoveryCluster
}  // namespace Aws
