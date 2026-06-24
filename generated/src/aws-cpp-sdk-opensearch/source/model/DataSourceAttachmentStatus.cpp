/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/DataSourceAttachmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace DataSourceAttachmentStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ATTACHED_HASH = HashingUtils::HashString("ATTACHED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DataSourceAttachmentStatus GetDataSourceAttachmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return DataSourceAttachmentStatus::PENDING;
  } else if (hashCode == ATTACHED_HASH) {
    return DataSourceAttachmentStatus::ATTACHED;
  } else if (hashCode == FAILED_HASH) {
    return DataSourceAttachmentStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSourceAttachmentStatus>(hashCode);
  }

  return DataSourceAttachmentStatus::NOT_SET;
}

Aws::String GetNameForDataSourceAttachmentStatus(DataSourceAttachmentStatus enumValue) {
  switch (enumValue) {
    case DataSourceAttachmentStatus::NOT_SET:
      return {};
    case DataSourceAttachmentStatus::PENDING:
      return "PENDING";
    case DataSourceAttachmentStatus::ATTACHED:
      return "ATTACHED";
    case DataSourceAttachmentStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSourceAttachmentStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
