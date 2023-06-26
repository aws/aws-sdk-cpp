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
  enum class DatabaseManagementPreference
  {
    NOT_SET,
    AWS_managed,
    Self_manage,
    No_preference
  };

namespace DatabaseManagementPreferenceMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseManagementPreference GetDatabaseManagementPreferenceForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForDatabaseManagementPreference(DatabaseManagementPreference value);
} // namespace DatabaseManagementPreferenceMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
