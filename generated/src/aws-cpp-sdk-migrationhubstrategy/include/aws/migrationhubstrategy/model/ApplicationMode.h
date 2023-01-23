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
  enum class ApplicationMode
  {
    NOT_SET,
    ALL,
    KNOWN,
    UNKNOWN
  };

namespace ApplicationModeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationMode GetApplicationModeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForApplicationMode(ApplicationMode value);
} // namespace ApplicationModeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
