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
  enum class UserSettingActionEnum
  {
    NOT_SET,
    CLIPBOARD_COPY_FROM_LOCAL_DEVICE,
    CLIPBOARD_COPY_TO_LOCAL_DEVICE,
    PRINTING_TO_LOCAL_DEVICE,
    SMART_CARD
  };

namespace UserSettingActionEnumMapper
{
AWS_WORKSPACES_API UserSettingActionEnum GetUserSettingActionEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForUserSettingActionEnum(UserSettingActionEnum value);
} // namespace UserSettingActionEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
