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
enum class NetworkMigrationJobStatus { NOT_SET, PENDING, STARTED, SUCCEEDED, FAILED };

namespace NetworkMigrationJobStatusMapper {
AWS_MGN_API NetworkMigrationJobStatus GetNetworkMigrationJobStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationJobStatus(NetworkMigrationJobStatus value);
}  // namespace NetworkMigrationJobStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
