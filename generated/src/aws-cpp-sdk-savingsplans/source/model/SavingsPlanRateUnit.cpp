/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/savingsplans/model/SavingsPlanRateUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace SavingsPlans {
namespace Model {
namespace SavingsPlanRateUnitMapper {

static const int Hrs_HASH = HashingUtils::HashString("Hrs");
static const int Lambda_GB_Second_HASH = HashingUtils::HashString("Lambda-GB-Second");
static const int Request_HASH = HashingUtils::HashString("Request");
static const int ACU_Hr_HASH = HashingUtils::HashString("ACU-Hr");
static const int ReadRequestUnits_HASH = HashingUtils::HashString("ReadRequestUnits");
static const int WriteRequestUnits_HASH = HashingUtils::HashString("WriteRequestUnits");
static const int ReadCapacityUnit_Hrs_HASH = HashingUtils::HashString("ReadCapacityUnit-Hrs");
static const int WriteCapacityUnit_Hrs_HASH = HashingUtils::HashString("WriteCapacityUnit-Hrs");
static const int ReplicatedWriteRequestUnits_HASH = HashingUtils::HashString("ReplicatedWriteRequestUnits");
static const int ReplicatedWriteCapacityUnit_Hrs_HASH = HashingUtils::HashString("ReplicatedWriteCapacityUnit-Hrs");
static const int GB_Hours_HASH = HashingUtils::HashString("GB-Hours");
static const int DPU_HASH = HashingUtils::HashString("DPU");
static const int ElastiCacheProcessingUnit_HASH = HashingUtils::HashString("ElastiCacheProcessingUnit");
static const int DCU_Hr_HASH = HashingUtils::HashString("DCU-Hr");
static const int NCU_hr_HASH = HashingUtils::HashString("NCU-hr");

SavingsPlanRateUnit GetSavingsPlanRateUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Hrs_HASH) {
    return SavingsPlanRateUnit::Hrs;
  } else if (hashCode == Lambda_GB_Second_HASH) {
    return SavingsPlanRateUnit::Lambda_GB_Second;
  } else if (hashCode == Request_HASH) {
    return SavingsPlanRateUnit::Request;
  } else if (hashCode == ACU_Hr_HASH) {
    return SavingsPlanRateUnit::ACU_Hr;
  } else if (hashCode == ReadRequestUnits_HASH) {
    return SavingsPlanRateUnit::ReadRequestUnits;
  } else if (hashCode == WriteRequestUnits_HASH) {
    return SavingsPlanRateUnit::WriteRequestUnits;
  } else if (hashCode == ReadCapacityUnit_Hrs_HASH) {
    return SavingsPlanRateUnit::ReadCapacityUnit_Hrs;
  } else if (hashCode == WriteCapacityUnit_Hrs_HASH) {
    return SavingsPlanRateUnit::WriteCapacityUnit_Hrs;
  } else if (hashCode == ReplicatedWriteRequestUnits_HASH) {
    return SavingsPlanRateUnit::ReplicatedWriteRequestUnits;
  } else if (hashCode == ReplicatedWriteCapacityUnit_Hrs_HASH) {
    return SavingsPlanRateUnit::ReplicatedWriteCapacityUnit_Hrs;
  } else if (hashCode == GB_Hours_HASH) {
    return SavingsPlanRateUnit::GB_Hours;
  } else if (hashCode == DPU_HASH) {
    return SavingsPlanRateUnit::DPU;
  } else if (hashCode == ElastiCacheProcessingUnit_HASH) {
    return SavingsPlanRateUnit::ElastiCacheProcessingUnit;
  } else if (hashCode == DCU_Hr_HASH) {
    return SavingsPlanRateUnit::DCU_Hr;
  } else if (hashCode == NCU_hr_HASH) {
    return SavingsPlanRateUnit::NCU_hr;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SavingsPlanRateUnit>(hashCode);
  }

  return SavingsPlanRateUnit::NOT_SET;
}

Aws::String GetNameForSavingsPlanRateUnit(SavingsPlanRateUnit enumValue) {
  switch (enumValue) {
    case SavingsPlanRateUnit::NOT_SET:
      return {};
    case SavingsPlanRateUnit::Hrs:
      return "Hrs";
    case SavingsPlanRateUnit::Lambda_GB_Second:
      return "Lambda-GB-Second";
    case SavingsPlanRateUnit::Request:
      return "Request";
    case SavingsPlanRateUnit::ACU_Hr:
      return "ACU-Hr";
    case SavingsPlanRateUnit::ReadRequestUnits:
      return "ReadRequestUnits";
    case SavingsPlanRateUnit::WriteRequestUnits:
      return "WriteRequestUnits";
    case SavingsPlanRateUnit::ReadCapacityUnit_Hrs:
      return "ReadCapacityUnit-Hrs";
    case SavingsPlanRateUnit::WriteCapacityUnit_Hrs:
      return "WriteCapacityUnit-Hrs";
    case SavingsPlanRateUnit::ReplicatedWriteRequestUnits:
      return "ReplicatedWriteRequestUnits";
    case SavingsPlanRateUnit::ReplicatedWriteCapacityUnit_Hrs:
      return "ReplicatedWriteCapacityUnit-Hrs";
    case SavingsPlanRateUnit::GB_Hours:
      return "GB-Hours";
    case SavingsPlanRateUnit::DPU:
      return "DPU";
    case SavingsPlanRateUnit::ElastiCacheProcessingUnit:
      return "ElastiCacheProcessingUnit";
    case SavingsPlanRateUnit::DCU_Hr:
      return "DCU-Hr";
    case SavingsPlanRateUnit::NCU_hr:
      return "NCU-hr";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SavingsPlanRateUnitMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
