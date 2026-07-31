/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/TopicV2PublishOption.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace TopicV2PublishOptionMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int PUBLISH_HASH = HashingUtils::HashString("PUBLISH");

TopicV2PublishOption GetTopicV2PublishOptionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRAFT_HASH) {
    return TopicV2PublishOption::DRAFT;
  } else if (hashCode == PUBLISH_HASH) {
    return TopicV2PublishOption::PUBLISH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TopicV2PublishOption>(hashCode);
  }

  return TopicV2PublishOption::NOT_SET;
}

Aws::String GetNameForTopicV2PublishOption(TopicV2PublishOption enumValue) {
  switch (enumValue) {
    case TopicV2PublishOption::NOT_SET:
      return {};
    case TopicV2PublishOption::DRAFT:
      return "DRAFT";
    case TopicV2PublishOption::PUBLISH:
      return "PUBLISH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TopicV2PublishOptionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
