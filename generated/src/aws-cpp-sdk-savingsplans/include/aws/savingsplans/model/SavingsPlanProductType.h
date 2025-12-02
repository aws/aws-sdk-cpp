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
enum class SavingsPlanProductType {
  NOT_SET,
  EC2,
  Fargate,
  Lambda,
  SageMaker,
  RDS,
  DSQL,
  DynamoDB,
  ElastiCache,
  DocDB,
  Neptune,
  Timestream,
  Keyspaces,
  DMS
};

namespace SavingsPlanProductTypeMapper {
AWS_SAVINGSPLANS_API SavingsPlanProductType GetSavingsPlanProductTypeForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanProductType(SavingsPlanProductType value);
}  // namespace SavingsPlanProductTypeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
