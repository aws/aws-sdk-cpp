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
  enum class SrcCodeOrDbAnalysisStatus
  {
    NOT_SET,
    ANALYSIS_TO_BE_SCHEDULED,
    ANALYSIS_STARTED,
    ANALYSIS_SUCCESS,
    ANALYSIS_FAILED,
    ANALYSIS_PARTIAL_SUCCESS,
    UNCONFIGURED,
    CONFIGURED
  };

namespace SrcCodeOrDbAnalysisStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SrcCodeOrDbAnalysisStatus GetSrcCodeOrDbAnalysisStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus value);
} // namespace SrcCodeOrDbAnalysisStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
