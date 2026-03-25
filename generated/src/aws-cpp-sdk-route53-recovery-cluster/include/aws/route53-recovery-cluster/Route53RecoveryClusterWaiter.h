/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterClient.h>

#include <algorithm>

namespace Aws {
namespace Route53RecoveryCluster {

template <typename DerivedClient = Route53RecoveryClusterClient>
class Route53RecoveryClusterWaiter {
 public:
};
}  // namespace Route53RecoveryCluster
}  // namespace Aws
