/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/support/model/UploadStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Support {
namespace Model {
namespace UploadStatusMapper {

static const int attachment_ready_HASH = HashingUtils::HashString("attachment-ready");
static const int attachment_not_ready_HASH = HashingUtils::HashString("attachment-not-ready");
static const int failed_HASH = HashingUtils::HashString("failed");

UploadStatus GetUploadStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == attachment_ready_HASH) {
    return UploadStatus::attachment_ready;
  } else if (hashCode == attachment_not_ready_HASH) {
    return UploadStatus::attachment_not_ready;
  } else if (hashCode == failed_HASH) {
    return UploadStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UploadStatus>(hashCode);
  }

  return UploadStatus::NOT_SET;
}

Aws::String GetNameForUploadStatus(UploadStatus enumValue) {
  switch (enumValue) {
    case UploadStatus::NOT_SET:
      return {};
    case UploadStatus::attachment_ready:
      return "attachment-ready";
    case UploadStatus::attachment_not_ready:
      return "attachment-not-ready";
    case UploadStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UploadStatusMapper
}  // namespace Model
}  // namespace Support
}  // namespace Aws
