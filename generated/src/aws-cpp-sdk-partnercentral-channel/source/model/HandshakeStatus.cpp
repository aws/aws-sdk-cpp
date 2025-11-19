/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/HandshakeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace HandshakeStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");

HandshakeStatus GetHandshakeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return HandshakeStatus::PENDING;
  } else if (hashCode == ACCEPTED_HASH) {
    return HandshakeStatus::ACCEPTED;
  } else if (hashCode == REJECTED_HASH) {
    return HandshakeStatus::REJECTED;
  } else if (hashCode == CANCELED_HASH) {
    return HandshakeStatus::CANCELED;
  } else if (hashCode == EXPIRED_HASH) {
    return HandshakeStatus::EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HandshakeStatus>(hashCode);
  }

  return HandshakeStatus::NOT_SET;
}

Aws::String GetNameForHandshakeStatus(HandshakeStatus enumValue) {
  switch (enumValue) {
    case HandshakeStatus::NOT_SET:
      return {};
    case HandshakeStatus::PENDING:
      return "PENDING";
    case HandshakeStatus::ACCEPTED:
      return "ACCEPTED";
    case HandshakeStatus::REJECTED:
      return "REJECTED";
    case HandshakeStatus::CANCELED:
      return "CANCELED";
    case HandshakeStatus::EXPIRED:
      return "EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HandshakeStatusMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
