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
  enum class Severity
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace SeverityMapper
{
AWS_PI_API Severity GetSeverityForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace PI
} // namespace Aws
