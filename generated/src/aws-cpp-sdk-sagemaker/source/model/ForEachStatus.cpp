/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ForEachStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ForEachStatusMapper {

static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

ForEachStatus GetForEachStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Succeeded_HASH) {
    return ForEachStatus::Succeeded;
  } else if (hashCode == Failed_HASH) {
    return ForEachStatus::Failed;
  } else if (hashCode == Stopped_HASH) {
    return ForEachStatus::Stopped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ForEachStatus>(hashCode);
  }

  return ForEachStatus::NOT_SET;
}

Aws::String GetNameForForEachStatus(ForEachStatus enumValue) {
  switch (enumValue) {
    case ForEachStatus::NOT_SET:
      return {};
    case ForEachStatus::Succeeded:
      return "Succeeded";
    case ForEachStatus::Failed:
      return "Failed";
    case ForEachStatus::Stopped:
      return "Stopped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ForEachStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
