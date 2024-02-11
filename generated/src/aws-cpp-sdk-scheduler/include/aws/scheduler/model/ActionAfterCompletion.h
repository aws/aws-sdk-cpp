/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{
  enum class ActionAfterCompletion
  {
    NOT_SET,
    NONE,
    DELETE_
  };

namespace ActionAfterCompletionMapper
{
AWS_SCHEDULER_API ActionAfterCompletion GetActionAfterCompletionForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForActionAfterCompletion(ActionAfterCompletion value);
} // namespace ActionAfterCompletionMapper
} // namespace Model
} // namespace Scheduler
} // namespace Aws
