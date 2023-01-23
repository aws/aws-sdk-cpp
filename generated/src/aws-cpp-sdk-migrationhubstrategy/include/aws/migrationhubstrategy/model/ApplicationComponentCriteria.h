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
  enum class ApplicationComponentCriteria
  {
    NOT_SET,
    NOT_DEFINED,
    APP_NAME,
    SERVER_ID,
    APP_TYPE,
    STRATEGY,
    DESTINATION,
    ANALYSIS_STATUS,
    ERROR_CATEGORY
  };

namespace ApplicationComponentCriteriaMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentCriteria GetApplicationComponentCriteriaForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForApplicationComponentCriteria(ApplicationComponentCriteria value);
} // namespace ApplicationComponentCriteriaMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
