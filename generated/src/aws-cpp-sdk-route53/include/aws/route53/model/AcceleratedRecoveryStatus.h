/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>

namespace Aws {
namespace Route53 {
namespace Model {
enum class AcceleratedRecoveryStatus {
  NOT_SET,
  ENABLING,
  ENABLE_FAILED,
  ENABLING_HOSTED_ZONE_LOCKED,
  ENABLED,
  DISABLING,
  DISABLE_FAILED,
  DISABLED,
  DISABLING_HOSTED_ZONE_LOCKED
};

namespace AcceleratedRecoveryStatusMapper {
AWS_ROUTE53_API AcceleratedRecoveryStatus GetAcceleratedRecoveryStatusForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForAcceleratedRecoveryStatus(AcceleratedRecoveryStatus value);
}  // namespace AcceleratedRecoveryStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
