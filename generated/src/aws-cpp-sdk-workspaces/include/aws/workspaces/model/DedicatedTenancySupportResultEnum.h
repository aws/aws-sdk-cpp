/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class DedicatedTenancySupportResultEnum { NOT_SET, ENABLED, DISABLED };

namespace DedicatedTenancySupportResultEnumMapper {
AWS_WORKSPACES_API DedicatedTenancySupportResultEnum GetDedicatedTenancySupportResultEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDedicatedTenancySupportResultEnum(DedicatedTenancySupportResultEnum value);
}  // namespace DedicatedTenancySupportResultEnumMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
