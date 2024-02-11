/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OSIS
{
namespace Model
{
  enum class PipelineStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATE_FAILED,
    UPDATE_FAILED,
    STARTING,
    START_FAILED,
    STOPPING,
    STOPPED
  };

namespace PipelineStatusMapper
{
AWS_OSIS_API PipelineStatus GetPipelineStatusForName(const Aws::String& name);

AWS_OSIS_API Aws::String GetNameForPipelineStatus(PipelineStatus value);
} // namespace PipelineStatusMapper
} // namespace Model
} // namespace OSIS
} // namespace Aws
