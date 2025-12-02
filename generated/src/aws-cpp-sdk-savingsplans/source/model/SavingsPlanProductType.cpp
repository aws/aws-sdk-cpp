/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SavingsPlans {
namespace Model {
namespace SavingsPlanProductTypeMapper {

static const int EC2_HASH = HashingUtils::HashString("EC2");
static const int Fargate_HASH = HashingUtils::HashString("Fargate");
static const int Lambda_HASH = HashingUtils::HashString("Lambda");
static const int SageMaker_HASH = HashingUtils::HashString("SageMaker");
static const int RDS_HASH = HashingUtils::HashString("RDS");
static const int DSQL_HASH = HashingUtils::HashString("DSQL");
static const int DynamoDB_HASH = HashingUtils::HashString("DynamoDB");
static const int ElastiCache_HASH = HashingUtils::HashString("ElastiCache");
static const int DocDB_HASH = HashingUtils::HashString("DocDB");
static const int Neptune_HASH = HashingUtils::HashString("Neptune");
static const int Timestream_HASH = HashingUtils::HashString("Timestream");
static const int Keyspaces_HASH = HashingUtils::HashString("Keyspaces");
static const int DMS_HASH = HashingUtils::HashString("DMS");

SavingsPlanProductType GetSavingsPlanProductTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2_HASH) {
    return SavingsPlanProductType::EC2;
  } else if (hashCode == Fargate_HASH) {
    return SavingsPlanProductType::Fargate;
  } else if (hashCode == Lambda_HASH) {
    return SavingsPlanProductType::Lambda;
  } else if (hashCode == SageMaker_HASH) {
    return SavingsPlanProductType::SageMaker;
  } else if (hashCode == RDS_HASH) {
    return SavingsPlanProductType::RDS;
  } else if (hashCode == DSQL_HASH) {
    return SavingsPlanProductType::DSQL;
  } else if (hashCode == DynamoDB_HASH) {
    return SavingsPlanProductType::DynamoDB;
  } else if (hashCode == ElastiCache_HASH) {
    return SavingsPlanProductType::ElastiCache;
  } else if (hashCode == DocDB_HASH) {
    return SavingsPlanProductType::DocDB;
  } else if (hashCode == Neptune_HASH) {
    return SavingsPlanProductType::Neptune;
  } else if (hashCode == Timestream_HASH) {
    return SavingsPlanProductType::Timestream;
  } else if (hashCode == Keyspaces_HASH) {
    return SavingsPlanProductType::Keyspaces;
  } else if (hashCode == DMS_HASH) {
    return SavingsPlanProductType::DMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SavingsPlanProductType>(hashCode);
  }

  return SavingsPlanProductType::NOT_SET;
}

Aws::String GetNameForSavingsPlanProductType(SavingsPlanProductType enumValue) {
  switch (enumValue) {
    case SavingsPlanProductType::NOT_SET:
      return {};
    case SavingsPlanProductType::EC2:
      return "EC2";
    case SavingsPlanProductType::Fargate:
      return "Fargate";
    case SavingsPlanProductType::Lambda:
      return "Lambda";
    case SavingsPlanProductType::SageMaker:
      return "SageMaker";
    case SavingsPlanProductType::RDS:
      return "RDS";
    case SavingsPlanProductType::DSQL:
      return "DSQL";
    case SavingsPlanProductType::DynamoDB:
      return "DynamoDB";
    case SavingsPlanProductType::ElastiCache:
      return "ElastiCache";
    case SavingsPlanProductType::DocDB:
      return "DocDB";
    case SavingsPlanProductType::Neptune:
      return "Neptune";
    case SavingsPlanProductType::Timestream:
      return "Timestream";
    case SavingsPlanProductType::Keyspaces:
      return "Keyspaces";
    case SavingsPlanProductType::DMS:
      return "DMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SavingsPlanProductTypeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
