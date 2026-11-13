/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterOperationSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterOperationSortByMapper {

static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");

ClusterOperationSortBy GetClusterOperationSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CreationTime_HASH) {
    return ClusterOperationSortBy::CreationTime;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterOperationSortBy>(hashCode);
  }

  return ClusterOperationSortBy::NOT_SET;
}

Aws::String GetNameForClusterOperationSortBy(ClusterOperationSortBy enumValue) {
  switch (enumValue) {
    case ClusterOperationSortBy::NOT_SET:
      return {};
    case ClusterOperationSortBy::CreationTime:
      return "CreationTime";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterOperationSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
