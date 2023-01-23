/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{
  enum class ServerStatus
  {
    NOT_SET,
    BACKING_UP,
    CONNECTION_LOST,
    CREATING,
    DELETING,
    MODIFYING,
    FAILED,
    HEALTHY,
    RUNNING,
    RESTORING,
    SETUP,
    UNDER_MAINTENANCE,
    UNHEALTHY,
    TERMINATED
  };

namespace ServerStatusMapper
{
AWS_OPSWORKSCM_API ServerStatus GetServerStatusForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForServerStatus(ServerStatus value);
} // namespace ServerStatusMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
