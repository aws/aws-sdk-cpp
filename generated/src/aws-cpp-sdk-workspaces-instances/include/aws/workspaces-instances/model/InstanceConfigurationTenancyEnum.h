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
enum class InstanceConfigurationTenancyEnum { NOT_SET, SHARED, DEDICATED };

namespace InstanceConfigurationTenancyEnumMapper {
AWS_WORKSPACESINSTANCES_API InstanceConfigurationTenancyEnum GetInstanceConfigurationTenancyEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForInstanceConfigurationTenancyEnum(InstanceConfigurationTenancyEnum value);
}  // namespace InstanceConfigurationTenancyEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
