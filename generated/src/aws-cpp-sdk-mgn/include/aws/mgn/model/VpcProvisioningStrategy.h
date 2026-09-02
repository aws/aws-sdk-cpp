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
enum class VpcProvisioningStrategy { NOT_SET, CREATE_NEW, USE_EXISTING };

namespace VpcProvisioningStrategyMapper {
AWS_MGN_API VpcProvisioningStrategy GetVpcProvisioningStrategyForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForVpcProvisioningStrategy(VpcProvisioningStrategy value);
}  // namespace VpcProvisioningStrategyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
