/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/RAM_EXPORTS.h>

namespace Aws {
namespace RAM {
namespace Model {
enum class PermissionTemplateParameterType { NOT_SET, STRING, STRING_LIST };

namespace PermissionTemplateParameterTypeMapper {
AWS_RAM_API PermissionTemplateParameterType GetPermissionTemplateParameterTypeForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForPermissionTemplateParameterType(PermissionTemplateParameterType value);
}  // namespace PermissionTemplateParameterTypeMapper
}  // namespace Model
}  // namespace RAM
}  // namespace Aws
