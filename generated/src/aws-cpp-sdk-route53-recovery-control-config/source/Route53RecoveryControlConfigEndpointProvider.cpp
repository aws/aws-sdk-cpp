/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointProvider.h>
#include <aws/route53-recovery-control-config/internal/Route53RecoveryControlConfigEndpointRules.h>

namespace Aws {
namespace Route53RecoveryControlConfig {
namespace Endpoint {
Route53RecoveryControlConfigEndpointProvider::Route53RecoveryControlConfigEndpointProvider()
    : Route53RecoveryControlConfigDefaultEpProviderBase(
          Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigEndpointRules::GetRulesBlob(),
          Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
