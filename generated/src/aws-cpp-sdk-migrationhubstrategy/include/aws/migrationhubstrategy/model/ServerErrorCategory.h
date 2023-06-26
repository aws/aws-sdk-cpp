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
  enum class ServerErrorCategory
  {
    NOT_SET,
    CONNECTIVITY_ERROR,
    CREDENTIAL_ERROR,
    PERMISSION_ERROR,
    ARCHITECTURE_ERROR,
    OTHER_ERROR
  };

namespace ServerErrorCategoryMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerErrorCategory GetServerErrorCategoryForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForServerErrorCategory(ServerErrorCategory value);
} // namespace ServerErrorCategoryMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
