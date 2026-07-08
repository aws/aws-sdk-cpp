/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightFeedbackEntityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightFeedbackEntityTypeMapper {

static const int DomainName_HASH = HashingUtils::HashString("DomainName");

InsightFeedbackEntityType GetInsightFeedbackEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DomainName_HASH) {
    return InsightFeedbackEntityType::DomainName;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightFeedbackEntityType>(hashCode);
  }

  return InsightFeedbackEntityType::NOT_SET;
}

Aws::String GetNameForInsightFeedbackEntityType(InsightFeedbackEntityType enumValue) {
  switch (enumValue) {
    case InsightFeedbackEntityType::NOT_SET:
      return {};
    case InsightFeedbackEntityType::DomainName:
      return "DomainName";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightFeedbackEntityTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
