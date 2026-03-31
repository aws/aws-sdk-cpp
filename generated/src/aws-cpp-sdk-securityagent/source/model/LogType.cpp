/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/LogType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace LogTypeMapper {

static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");

LogType GetLogTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLOUDWATCH_HASH) {
    return LogType::CLOUDWATCH;
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
    case LogType::CLOUDWATCH:
      return "CLOUDWATCH";
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
}  // namespace SecurityAgent
}  // namespace Aws
