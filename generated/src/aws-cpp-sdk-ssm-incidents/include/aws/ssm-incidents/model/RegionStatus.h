/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>

namespace Aws {
namespace SSMIncidents {
namespace Model {
enum class RegionStatus { NOT_SET, ACTIVE, CREATING, DELETING, FAILED };

namespace RegionStatusMapper {
AWS_SSMINCIDENTS_API RegionStatus GetRegionStatusForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForRegionStatus(RegionStatus value);
}  // namespace RegionStatusMapper
}  // namespace Model
}  // namespace SSMIncidents
}  // namespace Aws
