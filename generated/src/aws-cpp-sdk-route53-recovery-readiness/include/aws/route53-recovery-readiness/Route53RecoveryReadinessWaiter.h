/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClient.h>

#include <algorithm>

namespace Aws {
namespace Route53RecoveryReadiness {

template <typename DerivedClient = Route53RecoveryReadinessClient>
class Route53RecoveryReadinessWaiter {
 public:
};
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
