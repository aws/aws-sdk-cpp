/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class UserSettingPermissionEnum
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace UserSettingPermissionEnumMapper
{
AWS_WORKSPACES_API UserSettingPermissionEnum GetUserSettingPermissionEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForUserSettingPermissionEnum(UserSettingPermissionEnum value);
} // namespace UserSettingPermissionEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
