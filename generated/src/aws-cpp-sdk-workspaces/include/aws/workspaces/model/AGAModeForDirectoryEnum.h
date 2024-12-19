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
  enum class AGAModeForDirectoryEnum
  {
    NOT_SET,
    ENABLED_AUTO,
    DISABLED
  };

namespace AGAModeForDirectoryEnumMapper
{
AWS_WORKSPACES_API AGAModeForDirectoryEnum GetAGAModeForDirectoryEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAGAModeForDirectoryEnum(AGAModeForDirectoryEnum value);
} // namespace AGAModeForDirectoryEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
