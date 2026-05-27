/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterFSxLustreDeletionPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterFSxLustreDeletionPolicyMapper {

static const int DeleteIfNotUsed_HASH = HashingUtils::HashString("DeleteIfNotUsed");
static const int Keep_HASH = HashingUtils::HashString("Keep");

ClusterFSxLustreDeletionPolicy GetClusterFSxLustreDeletionPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DeleteIfNotUsed_HASH) {
    return ClusterFSxLustreDeletionPolicy::DeleteIfNotUsed;
  } else if (hashCode == Keep_HASH) {
    return ClusterFSxLustreDeletionPolicy::Keep;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterFSxLustreDeletionPolicy>(hashCode);
  }

  return ClusterFSxLustreDeletionPolicy::NOT_SET;
}

Aws::String GetNameForClusterFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy enumValue) {
  switch (enumValue) {
    case ClusterFSxLustreDeletionPolicy::NOT_SET:
      return {};
    case ClusterFSxLustreDeletionPolicy::DeleteIfNotUsed:
      return "DeleteIfNotUsed";
    case ClusterFSxLustreDeletionPolicy::Keep:
      return "Keep";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterFSxLustreDeletionPolicyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
