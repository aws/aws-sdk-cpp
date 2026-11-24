/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ChannelContractStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ChannelContractStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

ChannelContractStatus GetChannelContractStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ChannelContractStatus::PENDING;
  } else if (hashCode == ACCEPTED_HASH) {
    return ChannelContractStatus::ACCEPTED;
  } else if (hashCode == EXPIRED_HASH) {
    return ChannelContractStatus::EXPIRED;
  } else if (hashCode == CANCELED_HASH) {
    return ChannelContractStatus::CANCELED;
  } else if (hashCode == INACTIVE_HASH) {
    return ChannelContractStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelContractStatus>(hashCode);
  }

  return ChannelContractStatus::NOT_SET;
}

Aws::String GetNameForChannelContractStatus(ChannelContractStatus enumValue) {
  switch (enumValue) {
    case ChannelContractStatus::NOT_SET:
      return {};
    case ChannelContractStatus::PENDING:
      return "PENDING";
    case ChannelContractStatus::ACCEPTED:
      return "ACCEPTED";
    case ChannelContractStatus::EXPIRED:
      return "EXPIRED";
    case ChannelContractStatus::CANCELED:
      return "CANCELED";
    case ChannelContractStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelContractStatusMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
