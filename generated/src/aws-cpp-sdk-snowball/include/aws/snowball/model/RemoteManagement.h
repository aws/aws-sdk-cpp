/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/Snowball_EXPORTS.h>

namespace Aws {
namespace Snowball {
namespace Model {
enum class RemoteManagement { NOT_SET, INSTALLED_ONLY, INSTALLED_AUTOSTART, NOT_INSTALLED };

namespace RemoteManagementMapper {
AWS_SNOWBALL_API RemoteManagement GetRemoteManagementForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForRemoteManagement(RemoteManagement value);
}  // namespace RemoteManagementMapper
}  // namespace Model
}  // namespace Snowball
}  // namespace Aws
