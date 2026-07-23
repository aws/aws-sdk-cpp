/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <aws/route53-recovery-readiness/internal/Route53RecoveryReadinessEndpointRules.h>

namespace Aws {
namespace Route53RecoveryReadiness {
namespace Endpoint {
Route53RecoveryReadinessEndpointProvider::Route53RecoveryReadinessEndpointProvider()
    : Route53RecoveryReadinessDefaultEpProviderBase(Aws::Route53RecoveryReadiness::Route53RecoveryReadinessEndpointRules::GetRulesBlob(),
                                                    Aws::Route53RecoveryReadiness::Route53RecoveryReadinessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
