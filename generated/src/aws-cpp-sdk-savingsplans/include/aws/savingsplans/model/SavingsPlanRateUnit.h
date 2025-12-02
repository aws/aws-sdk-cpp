/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>

namespace Aws {
namespace SavingsPlans {
namespace Model {
enum class SavingsPlanRateUnit {
  NOT_SET,
  Hrs,
  Lambda_GB_Second,
  Request,
  ACU_Hr,
  ReadRequestUnits,
  WriteRequestUnits,
  ReadCapacityUnit_Hrs,
  WriteCapacityUnit_Hrs,
  ReplicatedWriteRequestUnits,
  ReplicatedWriteCapacityUnit_Hrs,
  GB_Hours,
  DPU,
  ElastiCacheProcessingUnit,
  DCU_Hr,
  NCU_hr
};

namespace SavingsPlanRateUnitMapper {
AWS_SAVINGSPLANS_API SavingsPlanRateUnit GetSavingsPlanRateUnitForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanRateUnit(SavingsPlanRateUnit value);
}  // namespace SavingsPlanRateUnitMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
