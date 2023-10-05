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
  enum class AssociationState
  {
    NOT_SET,
    PENDING_INSTALL,
    PENDING_INSTALL_DEPLOYMENT,
    PENDING_UNINSTALL,
    PENDING_UNINSTALL_DEPLOYMENT,
    INSTALLING,
    UNINSTALLING,
    ERROR_,
    COMPLETED,
    REMOVED
  };

namespace AssociationStateMapper
{
AWS_WORKSPACES_API AssociationState GetAssociationStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAssociationState(AssociationState value);
} // namespace AssociationStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
