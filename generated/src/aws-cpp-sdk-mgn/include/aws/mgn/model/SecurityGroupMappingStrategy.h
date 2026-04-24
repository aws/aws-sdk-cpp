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
enum class SecurityGroupMappingStrategy { NOT_SET, MAP, SKIP };

namespace SecurityGroupMappingStrategyMapper {
AWS_MGN_API SecurityGroupMappingStrategy GetSecurityGroupMappingStrategyForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForSecurityGroupMappingStrategy(SecurityGroupMappingStrategy value);
}  // namespace SecurityGroupMappingStrategyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
