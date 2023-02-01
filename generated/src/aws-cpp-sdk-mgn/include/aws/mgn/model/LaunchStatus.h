/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class LaunchStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    LAUNCHED,
    FAILED,
    TERMINATED
  };

namespace LaunchStatusMapper
{
AWS_MGN_API LaunchStatus GetLaunchStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForLaunchStatus(LaunchStatus value);
} // namespace LaunchStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
