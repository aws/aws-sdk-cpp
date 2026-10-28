/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/DiffStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace DiffStatusMapper {

static const int compared_HASH = HashingUtils::HashString("compared");
static const int error_HASH = HashingUtils::HashString("error");

DiffStatus GetDiffStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == compared_HASH) {
    return DiffStatus::compared;
  } else if (hashCode == error_HASH) {
    return DiffStatus::error;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiffStatus>(hashCode);
  }

  return DiffStatus::NOT_SET;
}

Aws::String GetNameForDiffStatus(DiffStatus enumValue) {
  switch (enumValue) {
    case DiffStatus::NOT_SET:
      return {};
    case DiffStatus::compared:
      return "compared";
    case DiffStatus::error:
      return "error";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiffStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
