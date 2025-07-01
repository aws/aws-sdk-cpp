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
  enum class MonthName
  {
    NOT_SET,
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
  };

namespace MonthNameMapper
{
AWS_ODB_API MonthName GetMonthNameForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForMonthName(MonthName value);
} // namespace MonthNameMapper
} // namespace Model
} // namespace odb
} // namespace Aws
