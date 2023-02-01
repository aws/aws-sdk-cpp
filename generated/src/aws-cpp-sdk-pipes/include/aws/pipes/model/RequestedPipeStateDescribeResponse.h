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
  enum class RequestedPipeStateDescribeResponse
  {
    NOT_SET,
    RUNNING,
    STOPPED,
    DELETED
  };

namespace RequestedPipeStateDescribeResponseMapper
{
AWS_PIPES_API RequestedPipeStateDescribeResponse GetRequestedPipeStateDescribeResponseForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForRequestedPipeStateDescribeResponse(RequestedPipeStateDescribeResponse value);
} // namespace RequestedPipeStateDescribeResponseMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
