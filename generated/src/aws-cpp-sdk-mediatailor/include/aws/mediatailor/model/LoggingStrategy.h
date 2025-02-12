/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class LoggingStrategy
  {
    NOT_SET,
    VENDED_LOGS,
    LEGACY_CLOUDWATCH
  };

namespace LoggingStrategyMapper
{
AWS_MEDIATAILOR_API LoggingStrategy GetLoggingStrategyForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForLoggingStrategy(LoggingStrategy value);
} // namespace LoggingStrategyMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
