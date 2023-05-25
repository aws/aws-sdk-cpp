/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ExternalAlarmState
  {
    NOT_SET,
    UNKNOWN,
    ALARM
  };

namespace ExternalAlarmStateMapper
{
AWS_SSM_API ExternalAlarmState GetExternalAlarmStateForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForExternalAlarmState(ExternalAlarmState value);
} // namespace ExternalAlarmStateMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
