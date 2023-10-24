/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  enum class AssessmentDataSourceType
  {
    NOT_SET,
    StrategyRecommendationsApplicationDataCollector,
    ManualImport,
    ApplicationDiscoveryService
  };

namespace AssessmentDataSourceTypeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentDataSourceType GetAssessmentDataSourceTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAssessmentDataSourceType(AssessmentDataSourceType value);
} // namespace AssessmentDataSourceTypeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
