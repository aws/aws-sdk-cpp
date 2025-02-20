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
  enum class ToolbarType
  {
    NOT_SET,
    Floating,
    Docked
  };

namespace ToolbarTypeMapper
{
AWS_WORKSPACESWEB_API ToolbarType GetToolbarTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForToolbarType(ToolbarType value);
} // namespace ToolbarTypeMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
