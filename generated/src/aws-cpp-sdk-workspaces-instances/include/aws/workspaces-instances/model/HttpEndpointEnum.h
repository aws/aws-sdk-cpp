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
enum class HttpEndpointEnum { NOT_SET, enabled, disabled };

namespace HttpEndpointEnumMapper {
AWS_WORKSPACESINSTANCES_API HttpEndpointEnum GetHttpEndpointEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForHttpEndpointEnum(HttpEndpointEnum value);
}  // namespace HttpEndpointEnumMapper
}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
