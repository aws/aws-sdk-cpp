/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MWAA
{
namespace Model
{
  enum class LoggingLevel
  {
    NOT_SET,
    CRITICAL,
    ERROR_,
    WARNING,
    INFO,
    DEBUG_
  };

namespace LoggingLevelMapper
{
AWS_MWAA_API LoggingLevel GetLoggingLevelForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForLoggingLevel(LoggingLevel value);
} // namespace LoggingLevelMapper
} // namespace Model
} // namespace MWAA
} // namespace Aws
