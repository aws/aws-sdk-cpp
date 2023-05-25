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
  enum class AppUnitErrorCategory
  {
    NOT_SET,
    CREDENTIAL_ERROR,
    CONNECTIVITY_ERROR,
    PERMISSION_ERROR,
    UNSUPPORTED_ERROR,
    OTHER_ERROR
  };

namespace AppUnitErrorCategoryMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AppUnitErrorCategory GetAppUnitErrorCategoryForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAppUnitErrorCategory(AppUnitErrorCategory value);
} // namespace AppUnitErrorCategoryMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
