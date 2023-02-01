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
  enum class CustomEventsStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CustomEventsStatusMapper
{
AWS_CLOUDWATCHRUM_API CustomEventsStatus GetCustomEventsStatusForName(const Aws::String& name);

AWS_CLOUDWATCHRUM_API Aws::String GetNameForCustomEventsStatus(CustomEventsStatus value);
} // namespace CustomEventsStatusMapper
} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
