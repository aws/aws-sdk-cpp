/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Model {
enum class DataSourceType { NOT_SET, ApplicationDiscoveryService, MPA, Import, StrategyRecommendationsApplicationDataCollector };

namespace DataSourceTypeMapper {
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForDataSourceType(DataSourceType value);
}  // namespace DataSourceTypeMapper
}  // namespace Model
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
