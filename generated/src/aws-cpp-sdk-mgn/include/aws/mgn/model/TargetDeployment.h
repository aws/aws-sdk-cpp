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
enum class TargetDeployment { NOT_SET, SINGLE_ACCOUNT, MULTI_ACCOUNT };

namespace TargetDeploymentMapper {
AWS_MGN_API TargetDeployment GetTargetDeploymentForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForTargetDeployment(TargetDeployment value);
}  // namespace TargetDeploymentMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
