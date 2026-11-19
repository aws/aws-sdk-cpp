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
enum class HealthCheckSourceStatus {
  NOT_SET,
  CREATE_PENDING,
  CREATE_IN_PROGRESS,
  CREATE_COMPLETED,
  CREATE_FAILED,
  DELETE_PENDING,
  DELETE_IN_PROGRESS,
  DELETE_COMPLETED,
  DELETE_FAILED
};

namespace HealthCheckSourceStatusMapper {
AWS_ROUTE53_API HealthCheckSourceStatus GetHealthCheckSourceStatusForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForHealthCheckSourceStatus(HealthCheckSourceStatus value);
}  // namespace HealthCheckSourceStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
