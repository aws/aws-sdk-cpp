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
  enum class ImageType
  {
    NOT_SET,
    OWNED,
    SHARED
  };

namespace ImageTypeMapper
{
AWS_WORKSPACES_API ImageType GetImageTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForImageType(ImageType value);
} // namespace ImageTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
