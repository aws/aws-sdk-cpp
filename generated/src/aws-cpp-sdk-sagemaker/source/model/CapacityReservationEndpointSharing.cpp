/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CapacityReservationEndpointSharing.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CapacityReservationEndpointSharingMapper {

static const int SingleEndpoint_HASH = HashingUtils::HashString("SingleEndpoint");
static const int MultipleEndpoints_HASH = HashingUtils::HashString("MultipleEndpoints");

CapacityReservationEndpointSharing GetCapacityReservationEndpointSharingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SingleEndpoint_HASH) {
    return CapacityReservationEndpointSharing::SingleEndpoint;
  } else if (hashCode == MultipleEndpoints_HASH) {
    return CapacityReservationEndpointSharing::MultipleEndpoints;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationEndpointSharing>(hashCode);
  }

  return CapacityReservationEndpointSharing::NOT_SET;
}

Aws::String GetNameForCapacityReservationEndpointSharing(CapacityReservationEndpointSharing enumValue) {
  switch (enumValue) {
    case CapacityReservationEndpointSharing::NOT_SET:
      return {};
    case CapacityReservationEndpointSharing::SingleEndpoint:
      return "SingleEndpoint";
    case CapacityReservationEndpointSharing::MultipleEndpoints:
      return "MultipleEndpoints";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationEndpointSharingMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
