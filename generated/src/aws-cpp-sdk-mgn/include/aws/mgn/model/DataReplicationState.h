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
  enum class DataReplicationState
  {
    NOT_SET,
    STOPPED,
    INITIATING,
    INITIAL_SYNC,
    BACKLOG,
    CREATING_SNAPSHOT,
    CONTINUOUS,
    PAUSED,
    RESCAN,
    STALLED,
    DISCONNECTED,
    PENDING_SNAPSHOT_SHIPPING,
    SHIPPING_SNAPSHOT
  };

namespace DataReplicationStateMapper
{
AWS_MGN_API DataReplicationState GetDataReplicationStateForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForDataReplicationState(DataReplicationState value);
} // namespace DataReplicationStateMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
