/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/InteractionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace InteractionModeMapper {

static const int DELEGATE_HASH = HashingUtils::HashString("DELEGATE");
static const int HANDOFF_HASH = HashingUtils::HashString("HANDOFF");

InteractionMode GetInteractionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DELEGATE_HASH) {
    return InteractionMode::DELEGATE;
  } else if (hashCode == HANDOFF_HASH) {
    return InteractionMode::HANDOFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InteractionMode>(hashCode);
  }

  return InteractionMode::NOT_SET;
}

Aws::String GetNameForInteractionMode(InteractionMode enumValue) {
  switch (enumValue) {
    case InteractionMode::NOT_SET:
      return {};
    case InteractionMode::DELEGATE:
      return "DELEGATE";
    case InteractionMode::HANDOFF:
      return "HANDOFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InteractionModeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
