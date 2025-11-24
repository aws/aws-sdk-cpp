/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/PushMessageAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace PushMessageActionMapper {

static const int OPEN_APP_HASH = HashingUtils::HashString("OPEN_APP");
static const int DEEP_LINK_HASH = HashingUtils::HashString("DEEP_LINK");
static const int URL_HASH = HashingUtils::HashString("URL");

PushMessageAction GetPushMessageActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_APP_HASH) {
    return PushMessageAction::OPEN_APP;
  } else if (hashCode == DEEP_LINK_HASH) {
    return PushMessageAction::DEEP_LINK;
  } else if (hashCode == URL_HASH) {
    return PushMessageAction::URL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PushMessageAction>(hashCode);
  }

  return PushMessageAction::NOT_SET;
}

Aws::String GetNameForPushMessageAction(PushMessageAction enumValue) {
  switch (enumValue) {
    case PushMessageAction::NOT_SET:
      return {};
    case PushMessageAction::OPEN_APP:
      return "OPEN_APP";
    case PushMessageAction::DEEP_LINK:
      return "DEEP_LINK";
    case PushMessageAction::URL:
      return "URL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PushMessageActionMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
