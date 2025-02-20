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
  enum class VisualMode
  {
    NOT_SET,
    Dark,
    Light
  };

namespace VisualModeMapper
{
AWS_WORKSPACESWEB_API VisualMode GetVisualModeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForVisualMode(VisualMode value);
} // namespace VisualModeMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
