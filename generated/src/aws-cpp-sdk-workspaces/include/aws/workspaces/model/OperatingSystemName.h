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
  enum class OperatingSystemName
  {
    NOT_SET,
    AMAZON_LINUX_2,
    UBUNTU_18_04,
    UBUNTU_20_04,
    UBUNTU_22_04,
    UNKNOWN,
    WINDOWS_10,
    WINDOWS_11,
    WINDOWS_7,
    WINDOWS_SERVER_2016,
    WINDOWS_SERVER_2019,
    WINDOWS_SERVER_2022
  };

namespace OperatingSystemNameMapper
{
AWS_WORKSPACES_API OperatingSystemName GetOperatingSystemNameForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForOperatingSystemName(OperatingSystemName value);
} // namespace OperatingSystemNameMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
