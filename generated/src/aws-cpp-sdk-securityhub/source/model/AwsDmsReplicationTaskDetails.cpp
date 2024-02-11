/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDmsReplicationTaskDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDmsReplicationTaskDetails::AwsDmsReplicationTaskDetails() : 
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_migrationTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_replicationTaskIdentifierHasBeenSet(false),
    m_replicationTaskSettingsHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_taskDataHasBeenSet(false)
{
}

AwsDmsReplicationTaskDetails::AwsDmsReplicationTaskDetails(JsonView jsonValue) : 
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false),
    m_migrationTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_replicationTaskIdentifierHasBeenSet(false),
    m_replicationTaskSettingsHasBeenSet(false),
    m_sourceEndpointArnHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_targetEndpointArnHasBeenSet(false),
    m_taskDataHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDmsReplicationTaskDetails& AwsDmsReplicationTaskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CdcStartPosition"))
  {
    m_cdcStartPosition = jsonValue.GetString("CdcStartPosition");

    m_cdcStartPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcStartTime"))
  {
    m_cdcStartTime = jsonValue.GetString("CdcStartTime");

    m_cdcStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdcStopPosition"))
  {
    m_cdcStopPosition = jsonValue.GetString("CdcStopPosition");

    m_cdcStopPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationType"))
  {
    m_migrationType = jsonValue.GetString("MigrationType");

    m_migrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceArn"))
  {
    m_replicationInstanceArn = jsonValue.GetString("ReplicationInstanceArn");

    m_replicationInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskIdentifier"))
  {
    m_replicationTaskIdentifier = jsonValue.GetString("ReplicationTaskIdentifier");

    m_replicationTaskIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskSettings"))
  {
    m_replicationTaskSettings = jsonValue.GetString("ReplicationTaskSettings");

    m_replicationTaskSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceEndpointArn"))
  {
    m_sourceEndpointArn = jsonValue.GetString("SourceEndpointArn");

    m_sourceEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableMappings"))
  {
    m_tableMappings = jsonValue.GetString("TableMappings");

    m_tableMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetEndpointArn"))
  {
    m_targetEndpointArn = jsonValue.GetString("TargetEndpointArn");

    m_targetEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskData"))
  {
    m_taskData = jsonValue.GetString("TaskData");

    m_taskDataHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDmsReplicationTaskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cdcStartPositionHasBeenSet)
  {
   payload.WithString("CdcStartPosition", m_cdcStartPosition);

  }

  if(m_cdcStartTimeHasBeenSet)
  {
   payload.WithString("CdcStartTime", m_cdcStartTime);

  }

  if(m_cdcStopPositionHasBeenSet)
  {
   payload.WithString("CdcStopPosition", m_cdcStopPosition);

  }

  if(m_migrationTypeHasBeenSet)
  {
   payload.WithString("MigrationType", m_migrationType);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_replicationTaskIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationTaskIdentifier", m_replicationTaskIdentifier);

  }

  if(m_replicationTaskSettingsHasBeenSet)
  {
   payload.WithString("ReplicationTaskSettings", m_replicationTaskSettings);

  }

  if(m_sourceEndpointArnHasBeenSet)
  {
   payload.WithString("SourceEndpointArn", m_sourceEndpointArn);

  }

  if(m_tableMappingsHasBeenSet)
  {
   payload.WithString("TableMappings", m_tableMappings);

  }

  if(m_targetEndpointArnHasBeenSet)
  {
   payload.WithString("TargetEndpointArn", m_targetEndpointArn);

  }

  if(m_taskDataHasBeenSet)
  {
   payload.WithString("TaskData", m_taskData);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
