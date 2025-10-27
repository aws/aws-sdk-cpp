/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>

namespace Aws {
namespace Route53RecoveryControlConfig {
namespace Model {
enum class Status { NOT_SET, PENDING, DEPLOYED, PENDING_DELETION };

namespace StatusMapper {
AWS_ROUTE53RECOVERYCONTROLCONFIG_API Status GetStatusForName(const Aws::String& name);

AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
