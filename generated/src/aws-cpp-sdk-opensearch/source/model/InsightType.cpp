/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightType.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightTypeMapper {

static const int EVENT_HASH = HashingUtils::HashString("EVENT");
static const int RECOMMENDATION_HASH = HashingUtils::HashString("RECOMMENDATION");

InsightType GetInsightTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_HASH) {
    return InsightType::EVENT;
  } else if (hashCode == RECOMMENDATION_HASH) {
    return InsightType::RECOMMENDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightType>(hashCode);
  }

  return InsightType::NOT_SET;
}

Aws::String GetNameForInsightType(InsightType enumValue) {
  switch (enumValue) {
    case InsightType::NOT_SET:
      return {};
    case InsightType::EVENT:
      return "EVENT";
    case InsightType::RECOMMENDATION:
      return "RECOMMENDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
