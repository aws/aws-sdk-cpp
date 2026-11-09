/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/CutoverStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace CutoverStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");

CutoverStatus GetCutoverStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return CutoverStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return CutoverStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return CutoverStatus::Failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CutoverStatus>(hashCode);
  }

  return CutoverStatus::NOT_SET;
}

Aws::String GetNameForCutoverStatus(CutoverStatus enumValue) {
  switch (enumValue) {
    case CutoverStatus::NOT_SET:
      return {};
    case CutoverStatus::InProgress:
      return "InProgress";
    case CutoverStatus::Completed:
      return "Completed";
    case CutoverStatus::Failed:
      return "Failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CutoverStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
