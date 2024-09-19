/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{
  enum class SessionStatus
  {
    NOT_SET,
    Active,
    Terminated
  };

namespace SessionStatusMapper
{
AWS_WORKSPACESWEB_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForSessionStatus(SessionStatus value);
} // namespace SessionStatusMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
