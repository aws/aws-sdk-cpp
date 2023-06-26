/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{
  enum class StateEnum
  {
    NOT_SET,
    CREATED,
    DELETING,
    ACTIVE
  };

namespace StateEnumMapper
{
AWS_CLOUDWATCHRUM_API StateEnum GetStateEnumForName(const Aws::String& name);

AWS_CLOUDWATCHRUM_API Aws::String GetNameForStateEnum(StateEnum value);
} // namespace StateEnumMapper
} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
