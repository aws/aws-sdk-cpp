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
  enum class EpochTimeUnit
  {
    NOT_SET,
    MILLISECONDS,
    SECONDS,
    MICROSECONDS,
    NANOSECONDS
  };

namespace EpochTimeUnitMapper
{
AWS_PIPES_API EpochTimeUnit GetEpochTimeUnitForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForEpochTimeUnit(EpochTimeUnit value);
} // namespace EpochTimeUnitMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
