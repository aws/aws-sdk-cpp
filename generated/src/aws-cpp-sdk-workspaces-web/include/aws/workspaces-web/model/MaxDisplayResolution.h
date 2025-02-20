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
  enum class MaxDisplayResolution
  {
    NOT_SET,
    size4096X2160,
    size3840X2160,
    size3440X1440,
    size2560X1440,
    size1920X1080,
    size1280X720,
    size1024X768,
    size800X600
  };

namespace MaxDisplayResolutionMapper
{
AWS_WORKSPACESWEB_API MaxDisplayResolution GetMaxDisplayResolutionForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForMaxDisplayResolution(MaxDisplayResolution value);
} // namespace MaxDisplayResolutionMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
