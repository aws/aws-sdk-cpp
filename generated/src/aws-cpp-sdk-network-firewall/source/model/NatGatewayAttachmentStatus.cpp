/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/NatGatewayAttachmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace NatGatewayAttachmentStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

NatGatewayAttachmentStatus GetNatGatewayAttachmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return NatGatewayAttachmentStatus::CREATING;
  } else if (hashCode == READY_HASH) {
    return NatGatewayAttachmentStatus::READY;
  } else if (hashCode == UPDATING_HASH) {
    return NatGatewayAttachmentStatus::UPDATING;
  } else if (hashCode == FAILED_HASH) {
    return NatGatewayAttachmentStatus::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return NatGatewayAttachmentStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatGatewayAttachmentStatus>(hashCode);
  }

  return NatGatewayAttachmentStatus::NOT_SET;
}

Aws::String GetNameForNatGatewayAttachmentStatus(NatGatewayAttachmentStatus enumValue) {
  switch (enumValue) {
    case NatGatewayAttachmentStatus::NOT_SET:
      return {};
    case NatGatewayAttachmentStatus::CREATING:
      return "CREATING";
    case NatGatewayAttachmentStatus::READY:
      return "READY";
    case NatGatewayAttachmentStatus::UPDATING:
      return "UPDATING";
    case NatGatewayAttachmentStatus::FAILED:
      return "FAILED";
    case NatGatewayAttachmentStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatGatewayAttachmentStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
