/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws {
namespace SSM {
namespace Model {
enum class DHMCPermissionModel { NOT_SET, SERVICE_MANAGED, SELF_MANAGED };

namespace DHMCPermissionModelMapper {
AWS_SSM_API DHMCPermissionModel GetDHMCPermissionModelForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDHMCPermissionModel(DHMCPermissionModel value);
}  // namespace DHMCPermissionModelMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
