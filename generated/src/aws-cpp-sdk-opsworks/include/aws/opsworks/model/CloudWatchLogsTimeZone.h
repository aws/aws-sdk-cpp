/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class CloudWatchLogsTimeZone
  {
    NOT_SET,
    LOCAL,
    UTC
  };

namespace CloudWatchLogsTimeZoneMapper
{
AWS_OPSWORKS_API CloudWatchLogsTimeZone GetCloudWatchLogsTimeZoneForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForCloudWatchLogsTimeZone(CloudWatchLogsTimeZone value);
} // namespace CloudWatchLogsTimeZoneMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
