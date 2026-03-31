/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightFieldType.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightFieldTypeMapper {

static const int text_HASH = HashingUtils::HashString("text");
static const int metric_HASH = HashingUtils::HashString("metric");

InsightFieldType GetInsightFieldTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == text_HASH) {
    return InsightFieldType::text;
  } else if (hashCode == metric_HASH) {
    return InsightFieldType::metric;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightFieldType>(hashCode);
  }

  return InsightFieldType::NOT_SET;
}

Aws::String GetNameForInsightFieldType(InsightFieldType enumValue) {
  switch (enumValue) {
    case InsightFieldType::NOT_SET:
      return {};
    case InsightFieldType::text:
      return "text";
    case InsightFieldType::metric:
      return "metric";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightFieldTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
