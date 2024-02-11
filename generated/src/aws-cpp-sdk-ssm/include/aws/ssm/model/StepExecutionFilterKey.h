/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class StepExecutionFilterKey
  {
    NOT_SET,
    StartTimeBefore,
    StartTimeAfter,
    StepExecutionStatus,
    StepExecutionId,
    StepName,
    Action,
    ParentStepExecutionId,
    ParentStepIteration,
    ParentStepIteratorValue
  };

namespace StepExecutionFilterKeyMapper
{
AWS_SSM_API StepExecutionFilterKey GetStepExecutionFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForStepExecutionFilterKey(StepExecutionFilterKey value);
} // namespace StepExecutionFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
