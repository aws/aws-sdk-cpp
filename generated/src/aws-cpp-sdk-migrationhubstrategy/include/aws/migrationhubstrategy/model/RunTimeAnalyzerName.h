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
  enum class RunTimeAnalyzerName
  {
    NOT_SET,
    A2C_ANALYZER,
    REHOST_ANALYZER,
    EMP_PA_ANALYZER,
    DATABASE_ANALYZER,
    SCT_ANALYZER
  };

namespace RunTimeAnalyzerNameMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RunTimeAnalyzerName GetRunTimeAnalyzerNameForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForRunTimeAnalyzerName(RunTimeAnalyzerName value);
} // namespace RunTimeAnalyzerNameMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
