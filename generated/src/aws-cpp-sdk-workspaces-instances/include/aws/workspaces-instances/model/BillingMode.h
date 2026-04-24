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
enum class BillingMode { NOT_SET, MONTHLY, HOURLY };

namespace BillingModeMapper {
AWS_WORKSPACESINSTANCES_API BillingMode GetBillingModeForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForBillingMode(BillingMode value);
}  // namespace BillingModeMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
