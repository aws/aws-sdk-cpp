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
enum class ReplicationType { NOT_SET, AGENT_BASED, SNAPSHOT_SHIPPING };

namespace ReplicationTypeMapper {
AWS_MGN_API ReplicationType GetReplicationTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForReplicationType(ReplicationType value);
}  // namespace ReplicationTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
