/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/AssistantGlobalResiliencyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace AssistantGlobalResiliencyStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AssistantGlobalResiliencyStatus GetAssistantGlobalResiliencyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AssistantGlobalResiliencyStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return AssistantGlobalResiliencyStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssistantGlobalResiliencyStatus>(hashCode);
  }

  return AssistantGlobalResiliencyStatus::NOT_SET;
}

Aws::String GetNameForAssistantGlobalResiliencyStatus(AssistantGlobalResiliencyStatus enumValue) {
  switch (enumValue) {
    case AssistantGlobalResiliencyStatus::NOT_SET:
      return {};
    case AssistantGlobalResiliencyStatus::ENABLED:
      return "ENABLED";
    case AssistantGlobalResiliencyStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssistantGlobalResiliencyStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
