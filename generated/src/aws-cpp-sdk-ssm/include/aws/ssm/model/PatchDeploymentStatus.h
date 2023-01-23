﻿/**
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
  enum class PatchDeploymentStatus
  {
    NOT_SET,
    APPROVED,
    PENDING_APPROVAL,
    EXPLICIT_APPROVED,
    EXPLICIT_REJECTED
  };

namespace PatchDeploymentStatusMapper
{
AWS_SSM_API PatchDeploymentStatus GetPatchDeploymentStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchDeploymentStatus(PatchDeploymentStatus value);
} // namespace PatchDeploymentStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
