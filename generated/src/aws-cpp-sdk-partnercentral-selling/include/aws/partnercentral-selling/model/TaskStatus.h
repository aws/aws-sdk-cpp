/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class TaskStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    FAILED
  };

namespace TaskStatusMapper
{
AWS_PARTNERCENTRALSELLING_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForTaskStatus(TaskStatus value);
} // namespace TaskStatusMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
