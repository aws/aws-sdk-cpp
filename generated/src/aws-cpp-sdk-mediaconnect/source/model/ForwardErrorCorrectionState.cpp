/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/ForwardErrorCorrectionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace ForwardErrorCorrectionStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ForwardErrorCorrectionState GetForwardErrorCorrectionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ForwardErrorCorrectionState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ForwardErrorCorrectionState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ForwardErrorCorrectionState>(hashCode);
  }

  return ForwardErrorCorrectionState::NOT_SET;
}

Aws::String GetNameForForwardErrorCorrectionState(ForwardErrorCorrectionState enumValue) {
  switch (enumValue) {
    case ForwardErrorCorrectionState::NOT_SET:
      return {};
    case ForwardErrorCorrectionState::ENABLED:
      return "ENABLED";
    case ForwardErrorCorrectionState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ForwardErrorCorrectionStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
