/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class OperatingSystem
  {
    NOT_SET,
    WINDOWS,
    AMAZON_LINUX,
    AMAZON_LINUX_2,
    AMAZON_LINUX_2022,
    UBUNTU,
    REDHAT_ENTERPRISE_LINUX,
    SUSE,
    CENTOS,
    ORACLE_LINUX,
    DEBIAN,
    MACOS,
    RASPBIAN,
    ROCKY_LINUX,
    ALMA_LINUX,
    AMAZON_LINUX_2023
  };

namespace OperatingSystemMapper
{
AWS_SSM_API OperatingSystem GetOperatingSystemForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOperatingSystem(OperatingSystem value);
} // namespace OperatingSystemMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
