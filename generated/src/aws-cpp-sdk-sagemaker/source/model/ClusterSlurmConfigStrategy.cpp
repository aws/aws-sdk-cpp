/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterSlurmConfigStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterSlurmConfigStrategyMapper {

static const int Overwrite_HASH = HashingUtils::HashString("Overwrite");
static const int Managed_HASH = HashingUtils::HashString("Managed");
static const int Merge_HASH = HashingUtils::HashString("Merge");

ClusterSlurmConfigStrategy GetClusterSlurmConfigStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Overwrite_HASH) {
    return ClusterSlurmConfigStrategy::Overwrite;
  } else if (hashCode == Managed_HASH) {
    return ClusterSlurmConfigStrategy::Managed;
  } else if (hashCode == Merge_HASH) {
    return ClusterSlurmConfigStrategy::Merge;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterSlurmConfigStrategy>(hashCode);
  }

  return ClusterSlurmConfigStrategy::NOT_SET;
}

Aws::String GetNameForClusterSlurmConfigStrategy(ClusterSlurmConfigStrategy enumValue) {
  switch (enumValue) {
    case ClusterSlurmConfigStrategy::NOT_SET:
      return {};
    case ClusterSlurmConfigStrategy::Overwrite:
      return "Overwrite";
    case ClusterSlurmConfigStrategy::Managed:
      return "Managed";
    case ClusterSlurmConfigStrategy::Merge:
      return "Merge";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterSlurmConfigStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
