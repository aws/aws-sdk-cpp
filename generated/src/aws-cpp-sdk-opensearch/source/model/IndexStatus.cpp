/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/IndexStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace IndexStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

IndexStatus GetIndexStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return IndexStatus::CREATED;
  } else if (hashCode == UPDATED_HASH) {
    return IndexStatus::UPDATED;
  } else if (hashCode == DELETED_HASH) {
    return IndexStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IndexStatus>(hashCode);
  }

  return IndexStatus::NOT_SET;
}

Aws::String GetNameForIndexStatus(IndexStatus enumValue) {
  switch (enumValue) {
    case IndexStatus::NOT_SET:
      return {};
    case IndexStatus::CREATED:
      return "CREATED";
    case IndexStatus::UPDATED:
      return "UPDATED";
    case IndexStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IndexStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
