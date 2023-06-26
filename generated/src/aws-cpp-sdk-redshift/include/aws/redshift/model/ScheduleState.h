/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ScheduleState
  {
    NOT_SET,
    MODIFYING,
    ACTIVE,
    FAILED
  };

namespace ScheduleStateMapper
{
AWS_REDSHIFT_API ScheduleState GetScheduleStateForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForScheduleState(ScheduleState value);
} // namespace ScheduleStateMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
