/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/HealthCheckSourceStatusReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace HealthCheckSourceStatusReasonCodeMapper {

static const int INSUFFICIENT_SUBNET_IPS_HASH = HashingUtils::HashString("INSUFFICIENT_SUBNET_IPS");
static const int EC2_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EC2_LIMIT_EXCEEDED");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("INVALID_SUBNET");
static const int INVALID_SECURITY_GROUP_HASH = HashingUtils::HashString("INVALID_SECURITY_GROUP");
static const int INVALID_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_CONFIGURATION");
static const int SLR_MISSING_OR_NOT_ASSUMABLE_HASH = HashingUtils::HashString("SLR_MISSING_OR_NOT_ASSUMABLE");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

HealthCheckSourceStatusReasonCode GetHealthCheckSourceStatusReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INSUFFICIENT_SUBNET_IPS_HASH) {
    return HealthCheckSourceStatusReasonCode::INSUFFICIENT_SUBNET_IPS;
  } else if (hashCode == EC2_LIMIT_EXCEEDED_HASH) {
    return HealthCheckSourceStatusReasonCode::EC2_LIMIT_EXCEEDED;
  } else if (hashCode == INVALID_SUBNET_HASH) {
    return HealthCheckSourceStatusReasonCode::INVALID_SUBNET;
  } else if (hashCode == INVALID_SECURITY_GROUP_HASH) {
    return HealthCheckSourceStatusReasonCode::INVALID_SECURITY_GROUP;
  } else if (hashCode == INVALID_CONFIGURATION_HASH) {
    return HealthCheckSourceStatusReasonCode::INVALID_CONFIGURATION;
  } else if (hashCode == SLR_MISSING_OR_NOT_ASSUMABLE_HASH) {
    return HealthCheckSourceStatusReasonCode::SLR_MISSING_OR_NOT_ASSUMABLE;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return HealthCheckSourceStatusReasonCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HealthCheckSourceStatusReasonCode>(hashCode);
  }

  return HealthCheckSourceStatusReasonCode::NOT_SET;
}

Aws::String GetNameForHealthCheckSourceStatusReasonCode(HealthCheckSourceStatusReasonCode enumValue) {
  switch (enumValue) {
    case HealthCheckSourceStatusReasonCode::NOT_SET:
      return {};
    case HealthCheckSourceStatusReasonCode::INSUFFICIENT_SUBNET_IPS:
      return "INSUFFICIENT_SUBNET_IPS";
    case HealthCheckSourceStatusReasonCode::EC2_LIMIT_EXCEEDED:
      return "EC2_LIMIT_EXCEEDED";
    case HealthCheckSourceStatusReasonCode::INVALID_SUBNET:
      return "INVALID_SUBNET";
    case HealthCheckSourceStatusReasonCode::INVALID_SECURITY_GROUP:
      return "INVALID_SECURITY_GROUP";
    case HealthCheckSourceStatusReasonCode::INVALID_CONFIGURATION:
      return "INVALID_CONFIGURATION";
    case HealthCheckSourceStatusReasonCode::SLR_MISSING_OR_NOT_ASSUMABLE:
      return "SLR_MISSING_OR_NOT_ASSUMABLE";
    case HealthCheckSourceStatusReasonCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HealthCheckSourceStatusReasonCodeMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
