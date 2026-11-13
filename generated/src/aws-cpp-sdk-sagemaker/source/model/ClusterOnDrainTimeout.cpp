/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterOnDrainTimeout.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterOnDrainTimeoutMapper {

static const int Force_HASH = HashingUtils::HashString("Force");
static const int Skip_HASH = HashingUtils::HashString("Skip");

ClusterOnDrainTimeout GetClusterOnDrainTimeoutForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Force_HASH) {
    return ClusterOnDrainTimeout::Force;
  } else if (hashCode == Skip_HASH) {
    return ClusterOnDrainTimeout::Skip;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterOnDrainTimeout>(hashCode);
  }

  return ClusterOnDrainTimeout::NOT_SET;
}

Aws::String GetNameForClusterOnDrainTimeout(ClusterOnDrainTimeout enumValue) {
  switch (enumValue) {
    case ClusterOnDrainTimeout::NOT_SET:
      return {};
    case ClusterOnDrainTimeout::Force:
      return "Force";
    case ClusterOnDrainTimeout::Skip:
      return "Skip";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterOnDrainTimeoutMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
