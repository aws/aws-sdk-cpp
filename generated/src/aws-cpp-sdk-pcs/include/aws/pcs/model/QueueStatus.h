/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PCS
{
namespace Model
{
  enum class QueueStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATE_FAILED,
    DELETE_FAILED,
    UPDATE_FAILED,
    SUSPENDING,
    SUSPENDED
  };

namespace QueueStatusMapper
{
AWS_PCS_API QueueStatus GetQueueStatusForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForQueueStatus(QueueStatus value);
} // namespace QueueStatusMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
