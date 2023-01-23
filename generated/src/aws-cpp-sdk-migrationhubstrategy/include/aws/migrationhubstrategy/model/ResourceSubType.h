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
  enum class ResourceSubType
  {
    NOT_SET,
    Database,
    Process,
    DatabaseProcess
  };

namespace ResourceSubTypeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ResourceSubType GetResourceSubTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForResourceSubType(ResourceSubType value);
} // namespace ResourceSubTypeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
