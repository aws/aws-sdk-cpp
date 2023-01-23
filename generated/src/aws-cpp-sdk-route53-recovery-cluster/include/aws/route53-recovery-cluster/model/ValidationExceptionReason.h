/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    unknownOperation,
    cannotParse,
    fieldValidationFailed,
    other
  };

namespace ValidationExceptionReasonMapper
{
AWS_ROUTE53RECOVERYCLUSTER_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_ROUTE53RECOVERYCLUSTER_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
