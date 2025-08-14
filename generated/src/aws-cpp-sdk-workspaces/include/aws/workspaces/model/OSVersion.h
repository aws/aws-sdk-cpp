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
  enum class OSVersion
  {
    NOT_SET,
    Windows_10,
    Windows_11
  };

namespace OSVersionMapper
{
AWS_WORKSPACES_API OSVersion GetOSVersionForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForOSVersion(OSVersion value);
} // namespace OSVersionMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
