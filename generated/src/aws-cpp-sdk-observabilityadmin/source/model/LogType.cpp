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

LogType GetLogTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPLICATION_LOGS_HASH) {
    return LogType::APPLICATION_LOGS;
  } else if (hashCode == USAGE_LOGS_HASH) {
    return LogType::USAGE_LOGS;
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
