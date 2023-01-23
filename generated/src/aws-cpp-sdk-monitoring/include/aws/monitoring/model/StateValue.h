/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class StateValue
  {
    NOT_SET,
    OK,
    ALARM,
    INSUFFICIENT_DATA
  };

namespace StateValueMapper
{
AWS_CLOUDWATCH_API StateValue GetStateValueForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForStateValue(StateValue value);
} // namespace StateValueMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
