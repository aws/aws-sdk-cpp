/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SavingsPlans {
namespace Model {
namespace SavingsPlanRateServiceCodeMapper {

static const int AmazonEC2_HASH = HashingUtils::HashString("AmazonEC2");
static const int AmazonECS_HASH = HashingUtils::HashString("AmazonECS");
static const int AmazonEKS_HASH = HashingUtils::HashString("AmazonEKS");
static const int AWSLambda_HASH = HashingUtils::HashString("AWSLambda");
static const int AmazonSageMaker_HASH = HashingUtils::HashString("AmazonSageMaker");
static const int AmazonRDS_HASH = HashingUtils::HashString("AmazonRDS");
static const int AuroraDSQL_HASH = HashingUtils::HashString("AuroraDSQL");
static const int AmazonDynamoDB_HASH = HashingUtils::HashString("AmazonDynamoDB");
static const int AmazonElastiCache_HASH = HashingUtils::HashString("AmazonElastiCache");
static const int AmazonDocDB_HASH = HashingUtils::HashString("AmazonDocDB");
static const int AmazonNeptune_HASH = HashingUtils::HashString("AmazonNeptune");
static const int AmazonTimestream_HASH = HashingUtils::HashString("AmazonTimestream");
static const int AmazonMCS_HASH = HashingUtils::HashString("AmazonMCS");
static const int AWSDatabaseMigrationSvc_HASH = HashingUtils::HashString("AWSDatabaseMigrationSvc");

SavingsPlanRateServiceCode GetSavingsPlanRateServiceCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AmazonEC2_HASH) {
    return SavingsPlanRateServiceCode::AmazonEC2;
  } else if (hashCode == AmazonECS_HASH) {
    return SavingsPlanRateServiceCode::AmazonECS;
  } else if (hashCode == AmazonEKS_HASH) {
    return SavingsPlanRateServiceCode::AmazonEKS;
  } else if (hashCode == AWSLambda_HASH) {
    return SavingsPlanRateServiceCode::AWSLambda;
  } else if (hashCode == AmazonSageMaker_HASH) {
    return SavingsPlanRateServiceCode::AmazonSageMaker;
  } else if (hashCode == AmazonRDS_HASH) {
    return SavingsPlanRateServiceCode::AmazonRDS;
  } else if (hashCode == AuroraDSQL_HASH) {
    return SavingsPlanRateServiceCode::AuroraDSQL;
  } else if (hashCode == AmazonDynamoDB_HASH) {
    return SavingsPlanRateServiceCode::AmazonDynamoDB;
  } else if (hashCode == AmazonElastiCache_HASH) {
    return SavingsPlanRateServiceCode::AmazonElastiCache;
  } else if (hashCode == AmazonDocDB_HASH) {
    return SavingsPlanRateServiceCode::AmazonDocDB;
  } else if (hashCode == AmazonNeptune_HASH) {
    return SavingsPlanRateServiceCode::AmazonNeptune;
  } else if (hashCode == AmazonTimestream_HASH) {
    return SavingsPlanRateServiceCode::AmazonTimestream;
  } else if (hashCode == AmazonMCS_HASH) {
    return SavingsPlanRateServiceCode::AmazonMCS;
  } else if (hashCode == AWSDatabaseMigrationSvc_HASH) {
    return SavingsPlanRateServiceCode::AWSDatabaseMigrationSvc;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SavingsPlanRateServiceCode>(hashCode);
  }

  return SavingsPlanRateServiceCode::NOT_SET;
}

Aws::String GetNameForSavingsPlanRateServiceCode(SavingsPlanRateServiceCode enumValue) {
  switch (enumValue) {
    case SavingsPlanRateServiceCode::NOT_SET:
      return {};
    case SavingsPlanRateServiceCode::AmazonEC2:
      return "AmazonEC2";
    case SavingsPlanRateServiceCode::AmazonECS:
      return "AmazonECS";
    case SavingsPlanRateServiceCode::AmazonEKS:
      return "AmazonEKS";
    case SavingsPlanRateServiceCode::AWSLambda:
      return "AWSLambda";
    case SavingsPlanRateServiceCode::AmazonSageMaker:
      return "AmazonSageMaker";
    case SavingsPlanRateServiceCode::AmazonRDS:
      return "AmazonRDS";
    case SavingsPlanRateServiceCode::AuroraDSQL:
      return "AuroraDSQL";
    case SavingsPlanRateServiceCode::AmazonDynamoDB:
      return "AmazonDynamoDB";
    case SavingsPlanRateServiceCode::AmazonElastiCache:
      return "AmazonElastiCache";
    case SavingsPlanRateServiceCode::AmazonDocDB:
      return "AmazonDocDB";
    case SavingsPlanRateServiceCode::AmazonNeptune:
      return "AmazonNeptune";
    case SavingsPlanRateServiceCode::AmazonTimestream:
      return "AmazonTimestream";
    case SavingsPlanRateServiceCode::AmazonMCS:
      return "AmazonMCS";
    case SavingsPlanRateServiceCode::AWSDatabaseMigrationSvc:
      return "AWSDatabaseMigrationSvc";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SavingsPlanRateServiceCodeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
