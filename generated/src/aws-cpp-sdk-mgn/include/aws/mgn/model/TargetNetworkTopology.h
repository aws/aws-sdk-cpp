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
enum class TargetNetworkTopology { NOT_SET, ISOLATED_VPC, HUB_AND_SPOKE };

namespace TargetNetworkTopologyMapper {
AWS_MGN_API TargetNetworkTopology GetTargetNetworkTopologyForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForTargetNetworkTopology(TargetNetworkTopology value);
}  // namespace TargetNetworkTopologyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
