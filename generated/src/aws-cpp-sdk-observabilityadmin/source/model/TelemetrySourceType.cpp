/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/TelemetrySourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace TelemetrySourceTypeMapper {

static const int VPC_FLOW_LOGS_HASH = HashingUtils::HashString("VPC_FLOW_LOGS");
static const int ROUTE53_RESOLVER_QUERY_LOGS_HASH = HashingUtils::HashString("ROUTE53_RESOLVER_QUERY_LOGS");
static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
static const int EKS_AUTHENTICATOR_LOGS_HASH = HashingUtils::HashString("EKS_AUTHENTICATOR_LOGS");
static const int EKS_CONTROLLER_MANAGER_LOGS_HASH = HashingUtils::HashString("EKS_CONTROLLER_MANAGER_LOGS");
static const int EKS_SCHEDULER_LOGS_HASH = HashingUtils::HashString("EKS_SCHEDULER_LOGS");
static const int EKS_API_LOGS_HASH = HashingUtils::HashString("EKS_API_LOGS");

TelemetrySourceType GetTelemetrySourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_FLOW_LOGS_HASH) {
    return TelemetrySourceType::VPC_FLOW_LOGS;
  } else if (hashCode == ROUTE53_RESOLVER_QUERY_LOGS_HASH) {
    return TelemetrySourceType::ROUTE53_RESOLVER_QUERY_LOGS;
  } else if (hashCode == EKS_AUDIT_LOGS_HASH) {
    return TelemetrySourceType::EKS_AUDIT_LOGS;
  } else if (hashCode == EKS_AUTHENTICATOR_LOGS_HASH) {
    return TelemetrySourceType::EKS_AUTHENTICATOR_LOGS;
  } else if (hashCode == EKS_CONTROLLER_MANAGER_LOGS_HASH) {
    return TelemetrySourceType::EKS_CONTROLLER_MANAGER_LOGS;
  } else if (hashCode == EKS_SCHEDULER_LOGS_HASH) {
    return TelemetrySourceType::EKS_SCHEDULER_LOGS;
  } else if (hashCode == EKS_API_LOGS_HASH) {
    return TelemetrySourceType::EKS_API_LOGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TelemetrySourceType>(hashCode);
  }

  return TelemetrySourceType::NOT_SET;
}

Aws::String GetNameForTelemetrySourceType(TelemetrySourceType enumValue) {
  switch (enumValue) {
    case TelemetrySourceType::NOT_SET:
      return {};
    case TelemetrySourceType::VPC_FLOW_LOGS:
      return "VPC_FLOW_LOGS";
    case TelemetrySourceType::ROUTE53_RESOLVER_QUERY_LOGS:
      return "ROUTE53_RESOLVER_QUERY_LOGS";
    case TelemetrySourceType::EKS_AUDIT_LOGS:
      return "EKS_AUDIT_LOGS";
    case TelemetrySourceType::EKS_AUTHENTICATOR_LOGS:
      return "EKS_AUTHENTICATOR_LOGS";
    case TelemetrySourceType::EKS_CONTROLLER_MANAGER_LOGS:
      return "EKS_CONTROLLER_MANAGER_LOGS";
    case TelemetrySourceType::EKS_SCHEDULER_LOGS:
      return "EKS_SCHEDULER_LOGS";
    case TelemetrySourceType::EKS_API_LOGS:
      return "EKS_API_LOGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TelemetrySourceTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
