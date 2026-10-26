/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/NatGatewaySupportState.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace NatGatewaySupportStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int PENDING_ATTACHMENT_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ATTACHMENT_ACCEPTANCE");

NatGatewaySupportState GetNatGatewaySupportStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return NatGatewaySupportState::ENABLED;
  } else if (hashCode == ENABLING_HASH) {
    return NatGatewaySupportState::ENABLING;
  } else if (hashCode == DISABLED_HASH) {
    return NatGatewaySupportState::DISABLED;
  } else if (hashCode == DISABLING_HASH) {
    return NatGatewaySupportState::DISABLING;
  } else if (hashCode == PENDING_ATTACHMENT_ACCEPTANCE_HASH) {
    return NatGatewaySupportState::PENDING_ATTACHMENT_ACCEPTANCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatGatewaySupportState>(hashCode);
  }

  return NatGatewaySupportState::NOT_SET;
}

Aws::String GetNameForNatGatewaySupportState(NatGatewaySupportState enumValue) {
  switch (enumValue) {
    case NatGatewaySupportState::NOT_SET:
      return {};
    case NatGatewaySupportState::ENABLED:
      return "ENABLED";
    case NatGatewaySupportState::ENABLING:
      return "ENABLING";
    case NatGatewaySupportState::DISABLED:
      return "DISABLED";
    case NatGatewaySupportState::DISABLING:
      return "DISABLING";
    case NatGatewaySupportState::PENDING_ATTACHMENT_ACCEPTANCE:
      return "PENDING_ATTACHMENT_ACCEPTANCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatGatewaySupportStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
