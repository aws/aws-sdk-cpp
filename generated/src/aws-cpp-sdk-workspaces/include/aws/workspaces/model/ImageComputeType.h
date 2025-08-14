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
  enum class ImageComputeType
  {
    NOT_SET,
    BASE,
    GRAPHICS_G4DN
  };

namespace ImageComputeTypeMapper
{
AWS_WORKSPACES_API ImageComputeType GetImageComputeTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForImageComputeType(ImageComputeType value);
} // namespace ImageComputeTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
