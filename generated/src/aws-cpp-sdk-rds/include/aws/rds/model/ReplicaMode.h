/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class ReplicaMode { NOT_SET, open_read_only, mounted };

namespace ReplicaModeMapper {
AWS_RDS_API ReplicaMode GetReplicaModeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForReplicaMode(ReplicaMode value);
}  // namespace ReplicaModeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
