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
  enum class Severity
  {
    NOT_SET,
    HIGH,
    MEDIUM,
    LOW
  };

namespace SeverityMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Severity GetSeverityForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
