/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class TelemetrySourceType {
  NOT_SET,
  VPC_FLOW_LOGS,
  ROUTE53_RESOLVER_QUERY_LOGS,
  EKS_AUDIT_LOGS,
  EKS_AUTHENTICATOR_LOGS,
  EKS_CONTROLLER_MANAGER_LOGS,
  EKS_SCHEDULER_LOGS,
  EKS_API_LOGS
};

namespace TelemetrySourceTypeMapper {
AWS_OBSERVABILITYADMIN_API TelemetrySourceType GetTelemetrySourceTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTelemetrySourceType(TelemetrySourceType value);
}  // namespace TelemetrySourceTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
