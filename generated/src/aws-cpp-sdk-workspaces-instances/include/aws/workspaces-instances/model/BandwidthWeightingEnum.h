/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

namespace Aws {
namespace WorkspacesInstances {
namespace Model {
enum class BandwidthWeightingEnum { NOT_SET, default_, vpc_1, ebs_1 };

namespace BandwidthWeightingEnumMapper {
AWS_WORKSPACESINSTANCES_API BandwidthWeightingEnum GetBandwidthWeightingEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForBandwidthWeightingEnum(BandwidthWeightingEnum value);
}  // namespace BandwidthWeightingEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
