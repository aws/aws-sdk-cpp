/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{
  enum class Readiness
  {
    NOT_SET,
    READY,
    NOT_READY,
    UNKNOWN,
    NOT_AUTHORIZED
  };

namespace ReadinessMapper
{
AWS_ROUTE53RECOVERYREADINESS_API Readiness GetReadinessForName(const Aws::String& name);

AWS_ROUTE53RECOVERYREADINESS_API Aws::String GetNameForReadiness(Readiness value);
} // namespace ReadinessMapper
} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
