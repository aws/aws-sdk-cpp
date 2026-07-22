/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace Route53RecoveryCluster {
class AWS_ROUTE53RECOVERYCLUSTER_LOCAL Route53RecoveryClusterEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace Route53RecoveryCluster
}  // namespace Aws
