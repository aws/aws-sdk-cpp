/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/NatGatewaySupportValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace NatGatewaySupportValueMapper {

static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");

NatGatewaySupportValue GetNatGatewaySupportValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLE_HASH) {
    return NatGatewaySupportValue::ENABLE;
  } else if (hashCode == DISABLE_HASH) {
    return NatGatewaySupportValue::DISABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatGatewaySupportValue>(hashCode);
  }

  return NatGatewaySupportValue::NOT_SET;
}

Aws::String GetNameForNatGatewaySupportValue(NatGatewaySupportValue enumValue) {
  switch (enumValue) {
    case NatGatewaySupportValue::NOT_SET:
      return {};
    case NatGatewaySupportValue::ENABLE:
      return "ENABLE";
    case NatGatewaySupportValue::DISABLE:
      return "DISABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatGatewaySupportValueMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
