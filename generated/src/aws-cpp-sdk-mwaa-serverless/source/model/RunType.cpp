/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa-serverless/model/RunType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {
namespace RunTypeMapper {

static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");

RunType GetRunTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_DEMAND_HASH) {
    return RunType::ON_DEMAND;
  } else if (hashCode == SCHEDULED_HASH) {
    return RunType::SCHEDULED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RunType>(hashCode);
  }

  return RunType::NOT_SET;
}

Aws::String GetNameForRunType(RunType enumValue) {
  switch (enumValue) {
    case RunType::NOT_SET:
      return {};
    case RunType::ON_DEMAND:
      return "ON_DEMAND";
    case RunType::SCHEDULED:
      return "SCHEDULED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RunTypeMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
