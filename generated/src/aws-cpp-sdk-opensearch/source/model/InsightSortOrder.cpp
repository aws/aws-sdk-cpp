/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightSortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightSortOrderMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

InsightSortOrder GetInsightSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return InsightSortOrder::ASC;
  } else if (hashCode == DESC_HASH) {
    return InsightSortOrder::DESC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightSortOrder>(hashCode);
  }

  return InsightSortOrder::NOT_SET;
}

Aws::String GetNameForInsightSortOrder(InsightSortOrder enumValue) {
  switch (enumValue) {
    case InsightSortOrder::NOT_SET:
      return {};
    case InsightSortOrder::ASC:
      return "ASC";
    case InsightSortOrder::DESC:
      return "DESC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightSortOrderMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
