/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/IngestionStreamStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace IngestionStreamStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

IngestionStreamStatus GetIngestionStreamStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return IngestionStreamStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return IngestionStreamStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return IngestionStreamStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return IngestionStreamStatus::DELETED;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return IngestionStreamStatus::CREATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return IngestionStreamStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IngestionStreamStatus>(hashCode);
  }

  return IngestionStreamStatus::NOT_SET;
}

Aws::String GetNameForIngestionStreamStatus(IngestionStreamStatus enumValue) {
  switch (enumValue) {
    case IngestionStreamStatus::NOT_SET:
      return {};
    case IngestionStreamStatus::CREATING:
      return "CREATING";
    case IngestionStreamStatus::ACTIVE:
      return "ACTIVE";
    case IngestionStreamStatus::DELETING:
      return "DELETING";
    case IngestionStreamStatus::DELETED:
      return "DELETED";
    case IngestionStreamStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case IngestionStreamStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IngestionStreamStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
