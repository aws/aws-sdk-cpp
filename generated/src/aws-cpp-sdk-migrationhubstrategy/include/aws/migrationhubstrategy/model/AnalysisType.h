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
  enum class AnalysisType
  {
    NOT_SET,
    SOURCE_CODE_ANALYSIS,
    DATABASE_ANALYSIS,
    RUNTIME_ANALYSIS,
    BINARY_ANALYSIS
  };

namespace AnalysisTypeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAnalysisType(AnalysisType value);
} // namespace AnalysisTypeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
