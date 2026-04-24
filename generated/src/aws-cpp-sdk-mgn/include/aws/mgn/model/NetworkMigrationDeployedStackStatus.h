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
enum class NetworkMigrationDeployedStackStatus {
  NOT_SET,
  CREATE_COMPLETE,
  CREATE_FAILED,
  CREATE_STARTED,
  DELETE_COMPLETE,
  DELETE_FAILED,
  DELETE_STARTED
};

namespace NetworkMigrationDeployedStackStatusMapper {
AWS_MGN_API NetworkMigrationDeployedStackStatus GetNetworkMigrationDeployedStackStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationDeployedStackStatus(NetworkMigrationDeployedStackStatus value);
}  // namespace NetworkMigrationDeployedStackStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
