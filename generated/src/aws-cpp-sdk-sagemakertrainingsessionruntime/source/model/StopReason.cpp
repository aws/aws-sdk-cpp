/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemakertrainingsessionruntime/model/StopReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {
namespace StopReasonMapper {

static const int stop_HASH = HashingUtils::HashString("stop");
static const int length_HASH = HashingUtils::HashString("length");

StopReason GetStopReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == stop_HASH) {
    return StopReason::stop;
  } else if (hashCode == length_HASH) {
    return StopReason::length;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StopReason>(hashCode);
  }

  return StopReason::NOT_SET;
}

Aws::String GetNameForStopReason(StopReason enumValue) {
  switch (enumValue) {
    case StopReason::NOT_SET:
      return {};
    case StopReason::stop:
      return "stop";
    case StopReason::length:
      return "length";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StopReasonMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
