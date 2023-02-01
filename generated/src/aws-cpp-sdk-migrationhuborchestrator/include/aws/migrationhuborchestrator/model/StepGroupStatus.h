/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{
  enum class StepGroupStatus
  {
    NOT_SET,
    AWAITING_DEPENDENCIES,
    READY,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    PAUSED,
    PAUSING,
    USER_ATTENTION_REQUIRED
  };

namespace StepGroupStatusMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API StepGroupStatus GetStepGroupStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForStepGroupStatus(StepGroupStatus value);
} // namespace StepGroupStatusMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
