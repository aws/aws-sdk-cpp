/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class DayOfWeekName
  {
    NOT_SET,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
  };

namespace DayOfWeekNameMapper
{
AWS_ODB_API DayOfWeekName GetDayOfWeekNameForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDayOfWeekName(DayOfWeekName value);
} // namespace DayOfWeekNameMapper
} // namespace Model
} // namespace odb
} // namespace Aws
