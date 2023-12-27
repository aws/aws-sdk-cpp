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
  enum class WorkSpaceAssociatedResourceType
  {
    NOT_SET,
    APPLICATION
  };

namespace WorkSpaceAssociatedResourceTypeMapper
{
AWS_WORKSPACES_API WorkSpaceAssociatedResourceType GetWorkSpaceAssociatedResourceTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkSpaceAssociatedResourceType(WorkSpaceAssociatedResourceType value);
} // namespace WorkSpaceAssociatedResourceTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
