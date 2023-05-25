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
  enum class AssessmentStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    FAILED,
    STOPPED
  };

namespace AssessmentStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentStatus GetAssessmentStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAssessmentStatus(AssessmentStatus value);
} // namespace AssessmentStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
