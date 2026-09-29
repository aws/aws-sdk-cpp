/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/WebhookAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace WebhookActionMapper {

static const int CREATE_IF_ABSENT_HASH = HashingUtils::HashString("CREATE_IF_ABSENT");
static const int ROTATE_HASH = HashingUtils::HashString("ROTATE");

WebhookAction GetWebhookActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_IF_ABSENT_HASH) {
    return WebhookAction::CREATE_IF_ABSENT;
  } else if (hashCode == ROTATE_HASH) {
    return WebhookAction::ROTATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookAction>(hashCode);
  }

  return WebhookAction::NOT_SET;
}

Aws::String GetNameForWebhookAction(WebhookAction enumValue) {
  switch (enumValue) {
    case WebhookAction::NOT_SET:
      return {};
    case WebhookAction::CREATE_IF_ABSENT:
      return "CREATE_IF_ABSENT";
    case WebhookAction::ROTATE:
      return "ROTATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookActionMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
