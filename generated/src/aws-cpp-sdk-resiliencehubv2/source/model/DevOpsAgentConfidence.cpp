/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DevOpsAgentConfidence.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DevOpsAgentConfidenceMapper {

static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

DevOpsAgentConfidence GetDevOpsAgentConfidenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_HASH) {
    return DevOpsAgentConfidence::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return DevOpsAgentConfidence::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return DevOpsAgentConfidence::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DevOpsAgentConfidence>(hashCode);
  }

  return DevOpsAgentConfidence::NOT_SET;
}

Aws::String GetNameForDevOpsAgentConfidence(DevOpsAgentConfidence enumValue) {
  switch (enumValue) {
    case DevOpsAgentConfidence::NOT_SET:
      return {};
    case DevOpsAgentConfidence::HIGH:
      return "HIGH";
    case DevOpsAgentConfidence::MEDIUM:
      return "MEDIUM";
    case DevOpsAgentConfidence::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DevOpsAgentConfidenceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
