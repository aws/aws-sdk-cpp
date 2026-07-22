/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/LogType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace LogTypeMapper {

static const int APPLICATION_LOGS_HASH = HashingUtils::HashString("APPLICATION_LOGS");
static const int USAGE_LOGS_HASH = HashingUtils::HashString("USAGE_LOGS");
static const int SECURITY_FINDING_LOGS_HASH = HashingUtils::HashString("SECURITY_FINDING_LOGS");
static const int ACCESS_LOGS_HASH = HashingUtils::HashString("ACCESS_LOGS");
static const int CONNECTION_LOGS_HASH = HashingUtils::HashString("CONNECTION_LOGS");
static const int S3_SERVER_ACCESS_LOGS_HASH = HashingUtils::HashString("S3_SERVER_ACCESS_LOGS");
static const int ALB_ACCESS_LOGS_HASH = HashingUtils::HashString("ALB_ACCESS_LOGS");
static const int ALB_CONNECTION_LOGS_HASH = HashingUtils::HashString("ALB_CONNECTION_LOGS");
static const int ALB_HEALTH_CHECK_LOGS_HASH = HashingUtils::HashString("ALB_HEALTH_CHECK_LOGS");

LogType GetLogTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPLICATION_LOGS_HASH) {
    return LogType::APPLICATION_LOGS;
  } else if (hashCode == USAGE_LOGS_HASH) {
    return LogType::USAGE_LOGS;
  } else if (hashCode == SECURITY_FINDING_LOGS_HASH) {
    return LogType::SECURITY_FINDING_LOGS;
  } else if (hashCode == ACCESS_LOGS_HASH) {
    return LogType::ACCESS_LOGS;
  } else if (hashCode == CONNECTION_LOGS_HASH) {
    return LogType::CONNECTION_LOGS;
  } else if (hashCode == S3_SERVER_ACCESS_LOGS_HASH) {
    return LogType::S3_SERVER_ACCESS_LOGS;
  } else if (hashCode == ALB_ACCESS_LOGS_HASH) {
    return LogType::ALB_ACCESS_LOGS;
  } else if (hashCode == ALB_CONNECTION_LOGS_HASH) {
    return LogType::ALB_CONNECTION_LOGS;
  } else if (hashCode == ALB_HEALTH_CHECK_LOGS_HASH) {
    return LogType::ALB_HEALTH_CHECK_LOGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogType>(hashCode);
  }

  return LogType::NOT_SET;
}

Aws::String GetNameForLogType(LogType enumValue) {
  switch (enumValue) {
    case LogType::NOT_SET:
      return {};
    case LogType::APPLICATION_LOGS:
      return "APPLICATION_LOGS";
    case LogType::USAGE_LOGS:
      return "USAGE_LOGS";
    case LogType::SECURITY_FINDING_LOGS:
      return "SECURITY_FINDING_LOGS";
    case LogType::ACCESS_LOGS:
      return "ACCESS_LOGS";
    case LogType::CONNECTION_LOGS:
      return "CONNECTION_LOGS";
    case LogType::S3_SERVER_ACCESS_LOGS:
      return "S3_SERVER_ACCESS_LOGS";
    case LogType::ALB_ACCESS_LOGS:
      return "ALB_ACCESS_LOGS";
    case LogType::ALB_CONNECTION_LOGS:
      return "ALB_CONNECTION_LOGS";
    case LogType::ALB_HEALTH_CHECK_LOGS:
      return "ALB_HEALTH_CHECK_LOGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
