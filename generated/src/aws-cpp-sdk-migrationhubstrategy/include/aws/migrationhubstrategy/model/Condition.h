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
  enum class Condition
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS,
    CONTAINS,
    NOT_CONTAINS
  };

namespace ConditionMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Condition GetConditionForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForCondition(Condition value);
} // namespace ConditionMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
