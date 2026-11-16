/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/ContextStoreAssociationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace ContextStoreAssociationStateMapper {

static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ContextStoreAssociationState GetContextStoreAssociationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATING_HASH) {
    return ContextStoreAssociationState::ASSOCIATING;
  } else if (hashCode == ASSOCIATED_HASH) {
    return ContextStoreAssociationState::ASSOCIATED;
  } else if (hashCode == DISASSOCIATING_HASH) {
    return ContextStoreAssociationState::DISASSOCIATING;
  } else if (hashCode == FAILED_HASH) {
    return ContextStoreAssociationState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextStoreAssociationState>(hashCode);
  }

  return ContextStoreAssociationState::NOT_SET;
}

Aws::String GetNameForContextStoreAssociationState(ContextStoreAssociationState enumValue) {
  switch (enumValue) {
    case ContextStoreAssociationState::NOT_SET:
      return {};
    case ContextStoreAssociationState::ASSOCIATING:
      return "ASSOCIATING";
    case ContextStoreAssociationState::ASSOCIATED:
      return "ASSOCIATED";
    case ContextStoreAssociationState::DISASSOCIATING:
      return "DISASSOCIATING";
    case ContextStoreAssociationState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextStoreAssociationStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
