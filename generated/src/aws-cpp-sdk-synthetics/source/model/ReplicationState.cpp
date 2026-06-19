/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/synthetics/model/ReplicationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {
namespace ReplicationStateMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int InSync_HASH = HashingUtils::HashString("InSync");
static const int Inconsistent_HASH = HashingUtils::HashString("Inconsistent");

ReplicationState GetReplicationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return ReplicationState::InProgress;
  } else if (hashCode == InSync_HASH) {
    return ReplicationState::InSync;
  } else if (hashCode == Inconsistent_HASH) {
    return ReplicationState::Inconsistent;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicationState>(hashCode);
  }

  return ReplicationState::NOT_SET;
}

Aws::String GetNameForReplicationState(ReplicationState enumValue) {
  switch (enumValue) {
    case ReplicationState::NOT_SET:
      return {};
    case ReplicationState::InProgress:
      return "InProgress";
    case ReplicationState::InSync:
      return "InSync";
    case ReplicationState::Inconsistent:
      return "Inconsistent";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicationStateMapper
}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
