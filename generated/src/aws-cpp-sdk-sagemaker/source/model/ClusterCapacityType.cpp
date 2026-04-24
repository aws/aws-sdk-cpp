/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterCapacityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterCapacityTypeMapper {

static const int Spot_HASH = HashingUtils::HashString("Spot");
static const int OnDemand_HASH = HashingUtils::HashString("OnDemand");

ClusterCapacityType GetClusterCapacityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Spot_HASH) {
    return ClusterCapacityType::Spot;
  } else if (hashCode == OnDemand_HASH) {
    return ClusterCapacityType::OnDemand;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterCapacityType>(hashCode);
  }

  return ClusterCapacityType::NOT_SET;
}

Aws::String GetNameForClusterCapacityType(ClusterCapacityType enumValue) {
  switch (enumValue) {
    case ClusterCapacityType::NOT_SET:
      return {};
    case ClusterCapacityType::Spot:
      return "Spot";
    case ClusterCapacityType::OnDemand:
      return "OnDemand";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterCapacityTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
