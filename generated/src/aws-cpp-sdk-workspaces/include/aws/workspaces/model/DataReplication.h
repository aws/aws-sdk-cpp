/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class DataReplication
  {
    NOT_SET,
    NO_REPLICATION,
    PRIMARY_AS_SOURCE
  };

namespace DataReplicationMapper
{
AWS_WORKSPACES_API DataReplication GetDataReplicationForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDataReplication(DataReplication value);
} // namespace DataReplicationMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
