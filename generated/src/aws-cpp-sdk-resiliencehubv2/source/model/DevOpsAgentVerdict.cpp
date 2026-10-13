/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DevOpsAgentVerdict.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DevOpsAgentVerdictMapper {

static const int PASS_HASH = HashingUtils::HashString("PASS");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");

DevOpsAgentVerdict GetDevOpsAgentVerdictForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASS_HASH) {
    return DevOpsAgentVerdict::PASS;
  } else if (hashCode == FAIL_HASH) {
    return DevOpsAgentVerdict::FAIL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DevOpsAgentVerdict>(hashCode);
  }

  return DevOpsAgentVerdict::NOT_SET;
}

Aws::String GetNameForDevOpsAgentVerdict(DevOpsAgentVerdict enumValue) {
  switch (enumValue) {
    case DevOpsAgentVerdict::NOT_SET:
      return {};
    case DevOpsAgentVerdict::PASS:
      return "PASS";
    case DevOpsAgentVerdict::FAIL:
      return "FAIL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DevOpsAgentVerdictMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
