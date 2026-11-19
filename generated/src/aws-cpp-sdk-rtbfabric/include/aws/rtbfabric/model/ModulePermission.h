/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class ModulePermission {
  NOT_SET,
  READ_REQUEST_BODY,
  READ_REQUEST_HEADERS,
  MUTATE_REQUEST_BODY,
  ENRICH_REQUEST_HEADERS,
  ENRICH_REQUEST_EXT,
  FILTER
};

namespace ModulePermissionMapper {
AWS_RTBFABRIC_API ModulePermission GetModulePermissionForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForModulePermission(ModulePermission value);
}  // namespace ModulePermissionMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
