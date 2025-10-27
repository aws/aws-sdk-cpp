/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class ResourceStatus { NOT_SET, AVAILABLE, FAILED, PROVISIONING, TERMINATED, TERMINATING, UPDATING, MAINTENANCE_IN_PROGRESS };

namespace ResourceStatusMapper {
AWS_ODB_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForResourceStatus(ResourceStatus value);
}  // namespace ResourceStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
