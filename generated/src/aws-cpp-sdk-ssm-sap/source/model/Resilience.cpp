/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/Resilience.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

Resilience::Resilience() : 
    m_hsrTierHasBeenSet(false),
    m_hsrReplicationMode(ReplicationMode::NOT_SET),
    m_hsrReplicationModeHasBeenSet(false),
    m_hsrOperationMode(OperationMode::NOT_SET),
    m_hsrOperationModeHasBeenSet(false),
    m_clusterStatus(ClusterStatus::NOT_SET),
    m_clusterStatusHasBeenSet(false)
{
}

Resilience::Resilience(JsonView jsonValue) : 
    m_hsrTierHasBeenSet(false),
    m_hsrReplicationMode(ReplicationMode::NOT_SET),
    m_hsrReplicationModeHasBeenSet(false),
    m_hsrOperationMode(OperationMode::NOT_SET),
    m_hsrOperationModeHasBeenSet(false),
    m_clusterStatus(ClusterStatus::NOT_SET),
    m_clusterStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Resilience& Resilience::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HsrTier"))
  {
    m_hsrTier = jsonValue.GetString("HsrTier");

    m_hsrTierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsrReplicationMode"))
  {
    m_hsrReplicationMode = ReplicationModeMapper::GetReplicationModeForName(jsonValue.GetString("HsrReplicationMode"));

    m_hsrReplicationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsrOperationMode"))
  {
    m_hsrOperationMode = OperationModeMapper::GetOperationModeForName(jsonValue.GetString("HsrOperationMode"));

    m_hsrOperationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterStatus"))
  {
    m_clusterStatus = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("ClusterStatus"));

    m_clusterStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Resilience::Jsonize() const
{
  JsonValue payload;

  if(m_hsrTierHasBeenSet)
  {
   payload.WithString("HsrTier", m_hsrTier);

  }

  if(m_hsrReplicationModeHasBeenSet)
  {
   payload.WithString("HsrReplicationMode", ReplicationModeMapper::GetNameForReplicationMode(m_hsrReplicationMode));
  }

  if(m_hsrOperationModeHasBeenSet)
  {
   payload.WithString("HsrOperationMode", OperationModeMapper::GetNameForOperationMode(m_hsrOperationMode));
  }

  if(m_clusterStatusHasBeenSet)
  {
   payload.WithString("ClusterStatus", ClusterStatusMapper::GetNameForClusterStatus(m_clusterStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
