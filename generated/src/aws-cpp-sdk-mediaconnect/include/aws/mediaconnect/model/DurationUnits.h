/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class DurationUnits
  {
    NOT_SET,
    MONTHS
  };

namespace DurationUnitsMapper
{
AWS_MEDIACONNECT_API DurationUnits GetDurationUnitsForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDurationUnits(DurationUnits value);
} // namespace DurationUnitsMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
