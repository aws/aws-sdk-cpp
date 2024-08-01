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
  enum class StatusType
  {
    NOT_SET,
    Deployment,
    AsyncExecutions
  };

namespace StatusTypeMapper
{
AWS_SSMQUICKSETUP_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_SSMQUICKSETUP_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
