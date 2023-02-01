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
  enum class CloudWatchLogsInitialPosition
  {
    NOT_SET,
    start_of_file,
    end_of_file
  };

namespace CloudWatchLogsInitialPositionMapper
{
AWS_OPSWORKS_API CloudWatchLogsInitialPosition GetCloudWatchLogsInitialPositionForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForCloudWatchLogsInitialPosition(CloudWatchLogsInitialPosition value);
} // namespace CloudWatchLogsInitialPositionMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
