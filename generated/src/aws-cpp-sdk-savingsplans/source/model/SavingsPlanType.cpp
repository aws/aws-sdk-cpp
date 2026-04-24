/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/savingsplans/model/SavingsPlanType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SavingsPlans {
namespace Model {
namespace SavingsPlanTypeMapper {

static const int Compute_HASH = HashingUtils::HashString("Compute");
static const int EC2Instance_HASH = HashingUtils::HashString("EC2Instance");
static const int SageMaker_HASH = HashingUtils::HashString("SageMaker");
static const int Database_HASH = HashingUtils::HashString("Database");

SavingsPlanType GetSavingsPlanTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Compute_HASH) {
    return SavingsPlanType::Compute;
  } else if (hashCode == EC2Instance_HASH) {
    return SavingsPlanType::EC2Instance;
  } else if (hashCode == SageMaker_HASH) {
    return SavingsPlanType::SageMaker;
  } else if (hashCode == Database_HASH) {
    return SavingsPlanType::Database;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SavingsPlanType>(hashCode);
  }

  return SavingsPlanType::NOT_SET;
}

Aws::String GetNameForSavingsPlanType(SavingsPlanType enumValue) {
  switch (enumValue) {
    case SavingsPlanType::NOT_SET:
      return {};
    case SavingsPlanType::Compute:
      return "Compute";
    case SavingsPlanType::EC2Instance:
      return "EC2Instance";
    case SavingsPlanType::SageMaker:
      return "SageMaker";
    case SavingsPlanType::Database:
      return "Database";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SavingsPlanTypeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
