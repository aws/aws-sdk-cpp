/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class NetworkMigrationFailedResourceStatus { NOT_SET, CREATE_FAILED, DELETE_FAILED };

namespace NetworkMigrationFailedResourceStatusMapper {
AWS_MGN_API NetworkMigrationFailedResourceStatus GetNetworkMigrationFailedResourceStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationFailedResourceStatus(NetworkMigrationFailedResourceStatus value);
}  // namespace NetworkMigrationFailedResourceStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
