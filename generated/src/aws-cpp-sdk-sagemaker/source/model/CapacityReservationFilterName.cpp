/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CapacityReservationFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CapacityReservationFilterNameMapper {

static const int Status_HASH = HashingUtils::HashString("Status");

CapacityReservationFilterName GetCapacityReservationFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Status_HASH) {
    return CapacityReservationFilterName::Status;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationFilterName>(hashCode);
  }

  return CapacityReservationFilterName::NOT_SET;
}

Aws::String GetNameForCapacityReservationFilterName(CapacityReservationFilterName enumValue) {
  switch (enumValue) {
    case CapacityReservationFilterName::NOT_SET:
      return {};
    case CapacityReservationFilterName::Status:
      return "Status";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationFilterNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
