/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/NatRuleState.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace NatRuleStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int PENDING_ATTACHMENT_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ATTACHMENT_ACCEPTANCE");

NatRuleState GetNatRuleStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return NatRuleState::CREATING;
  } else if (hashCode == MODIFYING_HASH) {
    return NatRuleState::MODIFYING;
  } else if (hashCode == DELETING_HASH) {
    return NatRuleState::DELETING;
  } else if (hashCode == ACTIVATED_HASH) {
    return NatRuleState::ACTIVATED;
  } else if (hashCode == ACTIVATING_HASH) {
    return NatRuleState::ACTIVATING;
  } else if (hashCode == DEACTIVATED_HASH) {
    return NatRuleState::DEACTIVATED;
  } else if (hashCode == DEACTIVATING_HASH) {
    return NatRuleState::DEACTIVATING;
  } else if (hashCode == FAILED_HASH) {
    return NatRuleState::FAILED;
  } else if (hashCode == PENDING_ATTACHMENT_ACCEPTANCE_HASH) {
    return NatRuleState::PENDING_ATTACHMENT_ACCEPTANCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatRuleState>(hashCode);
  }

  return NatRuleState::NOT_SET;
}

Aws::String GetNameForNatRuleState(NatRuleState enumValue) {
  switch (enumValue) {
    case NatRuleState::NOT_SET:
      return {};
    case NatRuleState::CREATING:
      return "CREATING";
    case NatRuleState::MODIFYING:
      return "MODIFYING";
    case NatRuleState::DELETING:
      return "DELETING";
    case NatRuleState::ACTIVATED:
      return "ACTIVATED";
    case NatRuleState::ACTIVATING:
      return "ACTIVATING";
    case NatRuleState::DEACTIVATED:
      return "DEACTIVATED";
    case NatRuleState::DEACTIVATING:
      return "DEACTIVATING";
    case NatRuleState::FAILED:
      return "FAILED";
    case NatRuleState::PENDING_ATTACHMENT_ACCEPTANCE:
      return "PENDING_ATTACHMENT_ACCEPTANCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatRuleStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
