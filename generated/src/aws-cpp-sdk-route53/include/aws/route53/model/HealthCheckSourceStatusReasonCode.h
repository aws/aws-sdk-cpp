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
enum class HealthCheckSourceStatusReasonCode {
  NOT_SET,
  INSUFFICIENT_SUBNET_IPS,
  EC2_LIMIT_EXCEEDED,
  INVALID_SUBNET,
  INVALID_SECURITY_GROUP,
  INVALID_CONFIGURATION,
  SLR_MISSING_OR_NOT_ASSUMABLE,
  INTERNAL_ERROR
};

namespace HealthCheckSourceStatusReasonCodeMapper {
AWS_ROUTE53_API HealthCheckSourceStatusReasonCode GetHealthCheckSourceStatusReasonCodeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForHealthCheckSourceStatusReasonCode(HealthCheckSourceStatusReasonCode value);
}  // namespace HealthCheckSourceStatusReasonCodeMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
