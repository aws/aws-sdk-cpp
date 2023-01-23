/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class PipeState
  {
    NOT_SET,
    RUNNING,
    STOPPED,
    CREATING,
    UPDATING,
    DELETING,
    STARTING,
    STOPPING,
    CREATE_FAILED,
    UPDATE_FAILED,
    START_FAILED,
    STOP_FAILED
  };

namespace PipeStateMapper
{
AWS_PIPES_API PipeState GetPipeStateForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForPipeState(PipeState value);
} // namespace PipeStateMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
