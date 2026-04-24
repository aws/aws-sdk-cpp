/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class PostLaunchActionExecutionStatus { NOT_SET, IN_PROGRESS, SUCCESS, FAILED };

namespace PostLaunchActionExecutionStatusMapper {
AWS_MGN_API PostLaunchActionExecutionStatus GetPostLaunchActionExecutionStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForPostLaunchActionExecutionStatus(PostLaunchActionExecutionStatus value);
}  // namespace PostLaunchActionExecutionStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
