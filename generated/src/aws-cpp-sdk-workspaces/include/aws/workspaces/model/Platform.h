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
  enum class Platform
  {
    NOT_SET,
    WINDOWS
  };

namespace PlatformMapper
{
AWS_WORKSPACES_API Platform GetPlatformForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForPlatform(Platform value);
} // namespace PlatformMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
