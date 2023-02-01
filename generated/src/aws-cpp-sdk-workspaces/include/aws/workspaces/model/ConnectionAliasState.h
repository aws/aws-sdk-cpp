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
  enum class ConnectionAliasState
  {
    NOT_SET,
    CREATING,
    CREATED,
    DELETING
  };

namespace ConnectionAliasStateMapper
{
AWS_WORKSPACES_API ConnectionAliasState GetConnectionAliasStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForConnectionAliasState(ConnectionAliasState value);
} // namespace ConnectionAliasStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
