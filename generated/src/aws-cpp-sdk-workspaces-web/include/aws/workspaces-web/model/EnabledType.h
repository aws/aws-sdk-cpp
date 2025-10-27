/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
enum class EnabledType { NOT_SET, Disabled, Enabled };

namespace EnabledTypeMapper {
AWS_WORKSPACESWEB_API EnabledType GetEnabledTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForEnabledType(EnabledType value);
}  // namespace EnabledTypeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
