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
  enum class SourceCodeAnalyzerName
  {
    NOT_SET,
    CSHARP_ANALYZER,
    JAVA_ANALYZER,
    BYTECODE_ANALYZER,
    PORTING_ASSISTANT
  };

namespace SourceCodeAnalyzerNameMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCodeAnalyzerName GetSourceCodeAnalyzerNameForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForSourceCodeAnalyzerName(SourceCodeAnalyzerName value);
} // namespace SourceCodeAnalyzerNameMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
