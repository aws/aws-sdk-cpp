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
  enum class ServerCriteria
  {
    NOT_SET,
    NOT_DEFINED,
    OS_NAME,
    STRATEGY,
    DESTINATION,
    SERVER_ID,
    ANALYSIS_STATUS,
    ERROR_CATEGORY
  };

namespace ServerCriteriaMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerCriteria GetServerCriteriaForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForServerCriteria(ServerCriteria value);
} // namespace ServerCriteriaMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
