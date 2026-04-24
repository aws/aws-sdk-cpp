/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/CollectionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace CollectionStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");

CollectionStatus GetCollectionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return CollectionStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return CollectionStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return CollectionStatus::DELETING;
  } else if (hashCode == ACTIVE_HASH) {
    return CollectionStatus::ACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return CollectionStatus::FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return CollectionStatus::UPDATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CollectionStatus>(hashCode);
  }

  return CollectionStatus::NOT_SET;
}

Aws::String GetNameForCollectionStatus(CollectionStatus enumValue) {
  switch (enumValue) {
    case CollectionStatus::NOT_SET:
      return {};
    case CollectionStatus::CREATING:
      return "CREATING";
    case CollectionStatus::UPDATING:
      return "UPDATING";
    case CollectionStatus::DELETING:
      return "DELETING";
    case CollectionStatus::ACTIVE:
      return "ACTIVE";
    case CollectionStatus::FAILED:
      return "FAILED";
    case CollectionStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CollectionStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
