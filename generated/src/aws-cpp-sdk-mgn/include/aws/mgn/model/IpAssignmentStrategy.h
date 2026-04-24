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
enum class IpAssignmentStrategy { NOT_SET, STATIC_, DYNAMIC };

namespace IpAssignmentStrategyMapper {
AWS_MGN_API IpAssignmentStrategy GetIpAssignmentStrategyForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForIpAssignmentStrategy(IpAssignmentStrategy value);
}  // namespace IpAssignmentStrategyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
