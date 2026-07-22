/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace Route53RecoveryReadiness {
class AWS_ROUTE53RECOVERYREADINESS_LOCAL Route53RecoveryReadinessEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
