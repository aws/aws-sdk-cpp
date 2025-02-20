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
  enum class ToolbarItem
  {
    NOT_SET,
    Windows,
    DualMonitor,
    FullScreen,
    Webcam,
    Microphone
  };

namespace ToolbarItemMapper
{
AWS_WORKSPACESWEB_API ToolbarItem GetToolbarItemForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForToolbarItem(ToolbarItem value);
} // namespace ToolbarItemMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
