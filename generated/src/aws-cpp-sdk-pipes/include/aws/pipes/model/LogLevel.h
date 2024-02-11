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
  enum class LogLevel
  {
    NOT_SET,
    OFF,
    ERROR_,
    INFO,
    TRACE
  };

namespace LogLevelMapper
{
AWS_PIPES_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
