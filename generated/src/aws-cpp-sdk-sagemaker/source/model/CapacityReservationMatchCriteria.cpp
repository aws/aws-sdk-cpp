/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CapacityReservationMatchCriteria.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CapacityReservationMatchCriteriaMapper {

static const int Open_HASH = HashingUtils::HashString("Open");
static const int Targeted_HASH = HashingUtils::HashString("Targeted");

CapacityReservationMatchCriteria GetCapacityReservationMatchCriteriaForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Open_HASH) {
    return CapacityReservationMatchCriteria::Open;
  } else if (hashCode == Targeted_HASH) {
    return CapacityReservationMatchCriteria::Targeted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationMatchCriteria>(hashCode);
  }

  return CapacityReservationMatchCriteria::NOT_SET;
}

Aws::String GetNameForCapacityReservationMatchCriteria(CapacityReservationMatchCriteria enumValue) {
  switch (enumValue) {
    case CapacityReservationMatchCriteria::NOT_SET:
      return {};
    case CapacityReservationMatchCriteria::Open:
      return "Open";
    case CapacityReservationMatchCriteria::Targeted:
      return "Targeted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationMatchCriteriaMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
