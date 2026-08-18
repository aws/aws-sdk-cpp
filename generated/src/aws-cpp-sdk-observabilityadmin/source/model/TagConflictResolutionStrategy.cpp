/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/TagConflictResolutionStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace TagConflictResolutionStrategyMapper {

static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
static const int ADD_ONLY_HASH = HashingUtils::HashString("ADD_ONLY");
static const int UPDATE_SYNC_HASH = HashingUtils::HashString("UPDATE_SYNC");

TagConflictResolutionStrategy GetTagConflictResolutionStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_SYNC_HASH) {
    return TagConflictResolutionStrategy::IN_SYNC;
  } else if (hashCode == ADD_ONLY_HASH) {
    return TagConflictResolutionStrategy::ADD_ONLY;
  } else if (hashCode == UPDATE_SYNC_HASH) {
    return TagConflictResolutionStrategy::UPDATE_SYNC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagConflictResolutionStrategy>(hashCode);
  }

  return TagConflictResolutionStrategy::NOT_SET;
}

Aws::String GetNameForTagConflictResolutionStrategy(TagConflictResolutionStrategy enumValue) {
  switch (enumValue) {
    case TagConflictResolutionStrategy::NOT_SET:
      return {};
    case TagConflictResolutionStrategy::IN_SYNC:
      return "IN_SYNC";
    case TagConflictResolutionStrategy::ADD_ONLY:
      return "ADD_ONLY";
    case TagConflictResolutionStrategy::UPDATE_SYNC:
      return "UPDATE_SYNC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagConflictResolutionStrategyMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
