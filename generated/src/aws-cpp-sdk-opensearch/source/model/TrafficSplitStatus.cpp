/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/TrafficSplitStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace TrafficSplitStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");

TrafficSplitStatus GetTrafficSplitStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return TrafficSplitStatus::InProgress;
  } else if (hashCode == Completed_HASH) {
    return TrafficSplitStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return TrafficSplitStatus::Failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrafficSplitStatus>(hashCode);
  }

  return TrafficSplitStatus::NOT_SET;
}

Aws::String GetNameForTrafficSplitStatus(TrafficSplitStatus enumValue) {
  switch (enumValue) {
    case TrafficSplitStatus::NOT_SET:
      return {};
    case TrafficSplitStatus::InProgress:
      return "InProgress";
    case TrafficSplitStatus::Completed:
      return "Completed";
    case TrafficSplitStatus::Failed:
      return "Failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrafficSplitStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
