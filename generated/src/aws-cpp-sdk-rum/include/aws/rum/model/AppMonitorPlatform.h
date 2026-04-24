/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/CloudWatchRUM_EXPORTS.h>

namespace Aws {
namespace CloudWatchRUM {
namespace Model {
enum class AppMonitorPlatform { NOT_SET, Web, Android, iOS };

namespace AppMonitorPlatformMapper {
AWS_CLOUDWATCHRUM_API AppMonitorPlatform GetAppMonitorPlatformForName(const Aws::String& name);

AWS_CLOUDWATCHRUM_API Aws::String GetNameForAppMonitorPlatform(AppMonitorPlatform value);
}  // namespace AppMonitorPlatformMapper
}  // namespace Model
}  // namespace CloudWatchRUM
}  // namespace Aws
