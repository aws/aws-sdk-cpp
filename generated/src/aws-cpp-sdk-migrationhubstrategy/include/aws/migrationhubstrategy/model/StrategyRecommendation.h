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
  enum class StrategyRecommendation
  {
    NOT_SET,
    recommended,
    viableOption,
    notRecommended,
    potential
  };

namespace StrategyRecommendationMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategyRecommendation GetStrategyRecommendationForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForStrategyRecommendation(StrategyRecommendation value);
} // namespace StrategyRecommendationMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
