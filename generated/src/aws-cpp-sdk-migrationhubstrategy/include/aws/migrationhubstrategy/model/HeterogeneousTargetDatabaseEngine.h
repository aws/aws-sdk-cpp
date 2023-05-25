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
  enum class HeterogeneousTargetDatabaseEngine
  {
    NOT_SET,
    None_specified,
    Amazon_Aurora,
    AWS_PostgreSQL,
    MySQL,
    Microsoft_SQL_Server,
    Oracle_Database,
    MariaDB,
    SAP,
    Db2_LUW,
    MongoDB
  };

namespace HeterogeneousTargetDatabaseEngineMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API HeterogeneousTargetDatabaseEngine GetHeterogeneousTargetDatabaseEngineForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForHeterogeneousTargetDatabaseEngine(HeterogeneousTargetDatabaseEngine value);
} // namespace HeterogeneousTargetDatabaseEngineMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
