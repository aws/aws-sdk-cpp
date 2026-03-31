/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/CapabilityStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace CapabilityStatusMapper {

static const int creating_HASH = HashingUtils::HashString("creating");
static const int create_failed_HASH = HashingUtils::HashString("create_failed");
static const int active_HASH = HashingUtils::HashString("active");
static const int updating_HASH = HashingUtils::HashString("updating");
static const int update_failed_HASH = HashingUtils::HashString("update_failed");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int delete_failed_HASH = HashingUtils::HashString("delete_failed");

CapabilityStatus GetCapabilityStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == creating_HASH) {
    return CapabilityStatus::creating;
  } else if (hashCode == create_failed_HASH) {
    return CapabilityStatus::create_failed;
  } else if (hashCode == active_HASH) {
    return CapabilityStatus::active;
  } else if (hashCode == updating_HASH) {
    return CapabilityStatus::updating;
  } else if (hashCode == update_failed_HASH) {
    return CapabilityStatus::update_failed;
  } else if (hashCode == deleting_HASH) {
    return CapabilityStatus::deleting;
  } else if (hashCode == delete_failed_HASH) {
    return CapabilityStatus::delete_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityStatus>(hashCode);
  }

  return CapabilityStatus::NOT_SET;
}

Aws::String GetNameForCapabilityStatus(CapabilityStatus enumValue) {
  switch (enumValue) {
    case CapabilityStatus::NOT_SET:
      return {};
    case CapabilityStatus::creating:
      return "creating";
    case CapabilityStatus::create_failed:
      return "create_failed";
    case CapabilityStatus::active:
      return "active";
    case CapabilityStatus::updating:
      return "updating";
    case CapabilityStatus::update_failed:
      return "update_failed";
    case CapabilityStatus::deleting:
      return "deleting";
    case CapabilityStatus::delete_failed:
      return "delete_failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
