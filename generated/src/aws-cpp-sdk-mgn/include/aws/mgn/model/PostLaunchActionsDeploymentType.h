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
  enum class PostLaunchActionsDeploymentType
  {
    NOT_SET,
    TEST_AND_CUTOVER,
    CUTOVER_ONLY,
    TEST_ONLY
  };

namespace PostLaunchActionsDeploymentTypeMapper
{
AWS_MGN_API PostLaunchActionsDeploymentType GetPostLaunchActionsDeploymentTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForPostLaunchActionsDeploymentType(PostLaunchActionsDeploymentType value);
} // namespace PostLaunchActionsDeploymentTypeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
