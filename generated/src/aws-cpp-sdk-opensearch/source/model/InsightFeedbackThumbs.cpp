/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/InsightFeedbackThumbs.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace InsightFeedbackThumbsMapper {

static const int Up_HASH = HashingUtils::HashString("Up");
static const int Down_HASH = HashingUtils::HashString("Down");

InsightFeedbackThumbs GetInsightFeedbackThumbsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Up_HASH) {
    return InsightFeedbackThumbs::Up;
  } else if (hashCode == Down_HASH) {
    return InsightFeedbackThumbs::Down;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightFeedbackThumbs>(hashCode);
  }

  return InsightFeedbackThumbs::NOT_SET;
}

Aws::String GetNameForInsightFeedbackThumbs(InsightFeedbackThumbs enumValue) {
  switch (enumValue) {
    case InsightFeedbackThumbs::NOT_SET:
      return {};
    case InsightFeedbackThumbs::Up:
      return "Up";
    case InsightFeedbackThumbs::Down:
      return "Down";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightFeedbackThumbsMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
