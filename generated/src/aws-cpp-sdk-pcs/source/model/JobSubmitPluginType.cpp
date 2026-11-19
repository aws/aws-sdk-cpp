/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/JobSubmitPluginType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace JobSubmitPluginTypeMapper {

static const int STARLARK_HASH = HashingUtils::HashString("STARLARK");

JobSubmitPluginType GetJobSubmitPluginTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARLARK_HASH) {
    return JobSubmitPluginType::STARLARK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobSubmitPluginType>(hashCode);
  }

  return JobSubmitPluginType::NOT_SET;
}

Aws::String GetNameForJobSubmitPluginType(JobSubmitPluginType enumValue) {
  switch (enumValue) {
    case JobSubmitPluginType::NOT_SET:
      return {};
    case JobSubmitPluginType::STARLARK:
      return "STARLARK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobSubmitPluginTypeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
