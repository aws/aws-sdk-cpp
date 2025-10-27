/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/LinkStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace LinkStatusMapper {

static const int PENDING_CREATION_HASH = HashingUtils::HashString("PENDING_CREATION");
static const int PENDING_REQUEST_HASH = HashingUtils::HashString("PENDING_REQUEST");
static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int PENDING_UPDATE_HASH = HashingUtils::HashString("PENDING_UPDATE");
static const int PENDING_ISOLATION_HASH = HashingUtils::HashString("PENDING_ISOLATION");
static const int ISOLATED_HASH = HashingUtils::HashString("ISOLATED");
static const int PENDING_RESTORATION_HASH = HashingUtils::HashString("PENDING_RESTORATION");

LinkStatus GetLinkStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_CREATION_HASH) {
    return LinkStatus::PENDING_CREATION;
  } else if (hashCode == PENDING_REQUEST_HASH) {
    return LinkStatus::PENDING_REQUEST;
  } else if (hashCode == REQUESTED_HASH) {
    return LinkStatus::REQUESTED;
  } else if (hashCode == ACCEPTED_HASH) {
    return LinkStatus::ACCEPTED;
  } else if (hashCode == ACTIVE_HASH) {
    return LinkStatus::ACTIVE;
  } else if (hashCode == REJECTED_HASH) {
    return LinkStatus::REJECTED;
  } else if (hashCode == FAILED_HASH) {
    return LinkStatus::FAILED;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return LinkStatus::PENDING_DELETION;
  } else if (hashCode == DELETED_HASH) {
    return LinkStatus::DELETED;
  } else if (hashCode == PENDING_UPDATE_HASH) {
    return LinkStatus::PENDING_UPDATE;
  } else if (hashCode == PENDING_ISOLATION_HASH) {
    return LinkStatus::PENDING_ISOLATION;
  } else if (hashCode == ISOLATED_HASH) {
    return LinkStatus::ISOLATED;
  } else if (hashCode == PENDING_RESTORATION_HASH) {
    return LinkStatus::PENDING_RESTORATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LinkStatus>(hashCode);
  }

  return LinkStatus::NOT_SET;
}

Aws::String GetNameForLinkStatus(LinkStatus enumValue) {
  switch (enumValue) {
    case LinkStatus::NOT_SET:
      return {};
    case LinkStatus::PENDING_CREATION:
      return "PENDING_CREATION";
    case LinkStatus::PENDING_REQUEST:
      return "PENDING_REQUEST";
    case LinkStatus::REQUESTED:
      return "REQUESTED";
    case LinkStatus::ACCEPTED:
      return "ACCEPTED";
    case LinkStatus::ACTIVE:
      return "ACTIVE";
    case LinkStatus::REJECTED:
      return "REJECTED";
    case LinkStatus::FAILED:
      return "FAILED";
    case LinkStatus::PENDING_DELETION:
      return "PENDING_DELETION";
    case LinkStatus::DELETED:
      return "DELETED";
    case LinkStatus::PENDING_UPDATE:
      return "PENDING_UPDATE";
    case LinkStatus::PENDING_ISOLATION:
      return "PENDING_ISOLATION";
    case LinkStatus::ISOLATED:
      return "ISOLATED";
    case LinkStatus::PENDING_RESTORATION:
      return "PENDING_RESTORATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LinkStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
