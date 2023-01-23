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
  enum class RuntimeAnalysisStatus
  {
    NOT_SET,
    ANALYSIS_TO_BE_SCHEDULED,
    ANALYSIS_STARTED,
    ANALYSIS_SUCCESS,
    ANALYSIS_FAILED
  };

namespace RuntimeAnalysisStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RuntimeAnalysisStatus GetRuntimeAnalysisStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForRuntimeAnalysisStatus(RuntimeAnalysisStatus value);
} // namespace RuntimeAnalysisStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
