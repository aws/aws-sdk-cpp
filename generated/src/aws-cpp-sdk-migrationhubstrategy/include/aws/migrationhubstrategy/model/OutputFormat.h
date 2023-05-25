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
  enum class OutputFormat
  {
    NOT_SET,
    Excel,
    Json
  };

namespace OutputFormatMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
