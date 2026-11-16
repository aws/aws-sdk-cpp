/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/ContextStoreState.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace ContextStoreStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

ContextStoreState GetContextStoreStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ContextStoreState::PENDING;
  } else if (hashCode == AVAILABLE_HASH) {
    return ContextStoreState::AVAILABLE;
  } else if (hashCode == UPDATING_HASH) {
    return ContextStoreState::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return ContextStoreState::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return ContextStoreState::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextStoreState>(hashCode);
  }

  return ContextStoreState::NOT_SET;
}

Aws::String GetNameForContextStoreState(ContextStoreState enumValue) {
  switch (enumValue) {
    case ContextStoreState::NOT_SET:
      return {};
    case ContextStoreState::PENDING:
      return "PENDING";
    case ContextStoreState::AVAILABLE:
      return "AVAILABLE";
    case ContextStoreState::UPDATING:
      return "UPDATING";
    case ContextStoreState::DELETING:
      return "DELETING";
    case ContextStoreState::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextStoreStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
