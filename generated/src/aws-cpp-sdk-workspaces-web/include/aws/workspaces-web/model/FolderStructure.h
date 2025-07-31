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
  enum class FolderStructure
  {
    NOT_SET,
    Flat,
    NestedByDate
  };

namespace FolderStructureMapper
{
AWS_WORKSPACESWEB_API FolderStructure GetFolderStructureForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForFolderStructure(FolderStructure value);
} // namespace FolderStructureMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
