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
  enum class RequestedPipeState
  {
    NOT_SET,
    RUNNING,
    STOPPED
  };

namespace RequestedPipeStateMapper
{
AWS_PIPES_API RequestedPipeState GetRequestedPipeStateForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForRequestedPipeState(RequestedPipeState value);
} // namespace RequestedPipeStateMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
