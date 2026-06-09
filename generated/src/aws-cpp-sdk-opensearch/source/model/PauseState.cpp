/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/PauseState.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace PauseStateMapper {

static const int Active_HASH = HashingUtils::HashString("Active");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
static const int Disabled_HASH = HashingUtils::HashString("Disabled");

PauseState GetPauseStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Active_HASH) {
    return PauseState::Active;
  } else if (hashCode == Completed_HASH) {
    return PauseState::Completed;
  } else if (hashCode == Scheduled_HASH) {
    return PauseState::Scheduled;
  } else if (hashCode == Disabled_HASH) {
    return PauseState::Disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PauseState>(hashCode);
  }

  return PauseState::NOT_SET;
}

Aws::String GetNameForPauseState(PauseState enumValue) {
  switch (enumValue) {
    case PauseState::NOT_SET:
      return {};
    case PauseState::Active:
      return "Active";
    case PauseState::Completed:
      return "Completed";
    case PauseState::Scheduled:
      return "Scheduled";
    case PauseState::Disabled:
      return "Disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PauseStateMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
