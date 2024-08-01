/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    INITIALIZING,
    DEPLOYING,
    SUCCEEDED,
    DELETING,
    STOPPING,
    FAILED,
    STOPPED,
    DELETE_FAILED,
    STOP_FAILED,
    NONE
  };

namespace StatusMapper
{
AWS_SSMQUICKSETUP_API Status GetStatusForName(const Aws::String& name);

AWS_SSMQUICKSETUP_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
