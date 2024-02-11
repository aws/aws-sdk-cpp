/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class GlobalClusterMemberSynchronizationStatus
  {
    NOT_SET,
    connected,
    pending_resync
  };

namespace GlobalClusterMemberSynchronizationStatusMapper
{
AWS_RDS_API GlobalClusterMemberSynchronizationStatus GetGlobalClusterMemberSynchronizationStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForGlobalClusterMemberSynchronizationStatus(GlobalClusterMemberSynchronizationStatus value);
} // namespace GlobalClusterMemberSynchronizationStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
