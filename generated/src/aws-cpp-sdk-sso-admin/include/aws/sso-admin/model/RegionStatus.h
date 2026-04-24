/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

namespace Aws {
namespace SSOAdmin {
namespace Model {
enum class RegionStatus { NOT_SET, ACTIVE, ADDING, REMOVING };

namespace RegionStatusMapper {
AWS_SSOADMIN_API RegionStatus GetRegionStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForRegionStatus(RegionStatus value);
}  // namespace RegionStatusMapper
}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
