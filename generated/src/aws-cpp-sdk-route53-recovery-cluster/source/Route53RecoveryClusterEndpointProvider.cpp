/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointProvider.h>
#include <aws/route53-recovery-cluster/internal/Route53RecoveryClusterEndpointRules.h>

namespace Aws {
namespace Route53RecoveryCluster {
namespace Endpoint {
Route53RecoveryClusterEndpointProvider::Route53RecoveryClusterEndpointProvider()
    : Route53RecoveryClusterDefaultEpProviderBase(Aws::Route53RecoveryCluster::Route53RecoveryClusterEndpointRules::GetRulesBlob(),
                                                  Aws::Route53RecoveryCluster::Route53RecoveryClusterEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53RecoveryCluster
}  // namespace Aws
