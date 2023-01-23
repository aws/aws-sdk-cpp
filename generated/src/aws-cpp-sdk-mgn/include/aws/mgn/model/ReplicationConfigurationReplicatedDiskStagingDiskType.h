/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ReplicationConfigurationReplicatedDiskStagingDiskType
  {
    NOT_SET,
    AUTO,
    GP2,
    IO1,
    SC1,
    ST1,
    STANDARD,
    GP3,
    IO2
  };

namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
{
AWS_MGN_API ReplicationConfigurationReplicatedDiskStagingDiskType GetReplicationConfigurationReplicatedDiskStagingDiskTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForReplicationConfigurationReplicatedDiskStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType value);
} // namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
