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
enum class RegionScope { NOT_SET, CURRENT_REGION, ALL_REGIONS };

namespace RegionScopeMapper {
AWS_SSOADMIN_API RegionScope GetRegionScopeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForRegionScope(RegionScope value);
}  // namespace RegionScopeMapper
}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
