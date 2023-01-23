/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{
  enum class TimeUnit
  {
    NOT_SET,
    MILLISECONDS,
    SECONDS,
    MICROSECONDS,
    NANOSECONDS
  };

namespace TimeUnitMapper
{
AWS_TIMESTREAMWRITE_API TimeUnit GetTimeUnitForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForTimeUnit(TimeUnit value);
} // namespace TimeUnitMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
