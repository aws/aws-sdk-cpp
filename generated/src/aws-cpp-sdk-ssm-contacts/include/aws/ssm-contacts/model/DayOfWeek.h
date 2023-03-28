/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{
  enum class DayOfWeek
  {
    NOT_SET,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
  };

namespace DayOfWeekMapper
{
AWS_SSMCONTACTS_API DayOfWeek GetDayOfWeekForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForDayOfWeek(DayOfWeek value);
} // namespace DayOfWeekMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
