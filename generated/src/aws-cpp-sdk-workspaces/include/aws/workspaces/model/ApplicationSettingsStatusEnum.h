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
  enum class ApplicationSettingsStatusEnum
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace ApplicationSettingsStatusEnumMapper
{
AWS_WORKSPACES_API ApplicationSettingsStatusEnum GetApplicationSettingsStatusEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForApplicationSettingsStatusEnum(ApplicationSettingsStatusEnum value);
} // namespace ApplicationSettingsStatusEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
