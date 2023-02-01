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
  enum class StandbyWorkspaceRelationshipType
  {
    NOT_SET,
    PRIMARY,
    STANDBY
  };

namespace StandbyWorkspaceRelationshipTypeMapper
{
AWS_WORKSPACES_API StandbyWorkspaceRelationshipType GetStandbyWorkspaceRelationshipTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForStandbyWorkspaceRelationshipType(StandbyWorkspaceRelationshipType value);
} // namespace StandbyWorkspaceRelationshipTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
