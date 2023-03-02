/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class PeriodAlignment
  {
    NOT_SET,
    END_TIME,
    START_TIME
  };

namespace PeriodAlignmentMapper
{
AWS_PI_API PeriodAlignment GetPeriodAlignmentForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForPeriodAlignment(PeriodAlignment value);
} // namespace PeriodAlignmentMapper
} // namespace Model
} // namespace PI
} // namespace Aws
