/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    ALL,
    ERROR_,
    FATAL,
    OFF
  };

namespace LogLevelMapper
{
AWS_SFN_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
