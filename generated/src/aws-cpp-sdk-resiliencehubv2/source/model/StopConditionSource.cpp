/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/StopConditionSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace StopConditionSourceMapper {

static const int aws_cloudwatch_alarm_HASH = HashingUtils::HashString("aws:cloudwatch:alarm");
static const int none_HASH = HashingUtils::HashString("none");

StopConditionSource GetStopConditionSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == aws_cloudwatch_alarm_HASH) {
    return StopConditionSource::aws_cloudwatch_alarm;
  } else if (hashCode == none_HASH) {
    return StopConditionSource::none;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StopConditionSource>(hashCode);
  }

  return StopConditionSource::NOT_SET;
}

Aws::String GetNameForStopConditionSource(StopConditionSource enumValue) {
  switch (enumValue) {
    case StopConditionSource::NOT_SET:
      return {};
    case StopConditionSource::aws_cloudwatch_alarm:
      return "aws:cloudwatch:alarm";
    case StopConditionSource::none:
      return "none";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StopConditionSourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
