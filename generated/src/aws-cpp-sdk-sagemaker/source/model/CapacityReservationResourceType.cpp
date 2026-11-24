/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CapacityReservationResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CapacityReservationResourceTypeMapper {

static const int HyperPodClusters_HASH = HashingUtils::HashString("HyperPodClusters");
static const int Endpoints_HASH = HashingUtils::HashString("Endpoints");

CapacityReservationResourceType GetCapacityReservationResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HyperPodClusters_HASH) {
    return CapacityReservationResourceType::HyperPodClusters;
  } else if (hashCode == Endpoints_HASH) {
    return CapacityReservationResourceType::Endpoints;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationResourceType>(hashCode);
  }

  return CapacityReservationResourceType::NOT_SET;
}

Aws::String GetNameForCapacityReservationResourceType(CapacityReservationResourceType enumValue) {
  switch (enumValue) {
    case CapacityReservationResourceType::NOT_SET:
      return {};
    case CapacityReservationResourceType::HyperPodClusters:
      return "HyperPodClusters";
    case CapacityReservationResourceType::Endpoints:
      return "Endpoints";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationResourceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
