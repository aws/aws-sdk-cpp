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
  enum class ImageAssociatedResourceType
  {
    NOT_SET,
    APPLICATION
  };

namespace ImageAssociatedResourceTypeMapper
{
AWS_WORKSPACES_API ImageAssociatedResourceType GetImageAssociatedResourceTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForImageAssociatedResourceType(ImageAssociatedResourceType value);
} // namespace ImageAssociatedResourceTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
