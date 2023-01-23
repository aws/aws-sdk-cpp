/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SourceServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

SourceServer::SourceServer() : 
    m_applicationIDHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_dataReplicationInfoHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_launchedInstanceHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_replicationType(ReplicationType::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_sourcePropertiesHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vcenterClientIDHasBeenSet(false)
{
}

SourceServer::SourceServer(JsonView jsonValue) : 
    m_applicationIDHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_dataReplicationInfoHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_launchedInstanceHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_replicationType(ReplicationType::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_sourcePropertiesHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vcenterClientIDHasBeenSet(false)
{
  *this = jsonValue;
}

SourceServer& SourceServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationID"))
  {
    m_applicationID = jsonValue.GetString("applicationID");

    m_applicationIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");

    m_dataReplicationInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");

    m_isArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchedInstance"))
  {
    m_launchedInstance = jsonValue.GetObject("launchedInstance");

    m_launchedInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("lifeCycle");

    m_lifeCycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationType"))
  {
    m_replicationType = ReplicationTypeMapper::GetReplicationTypeForName(jsonValue.GetString("replicationType"));

    m_replicationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");

    m_sourcePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vcenterClientID"))
  {
    m_vcenterClientID = jsonValue.GetString("vcenterClientID");

    m_vcenterClientIDHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceServer::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIDHasBeenSet)
  {
   payload.WithString("applicationID", m_applicationID);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_dataReplicationInfoHasBeenSet)
  {
   payload.WithObject("dataReplicationInfo", m_dataReplicationInfo.Jsonize());

  }

  if(m_isArchivedHasBeenSet)
  {
   payload.WithBool("isArchived", m_isArchived);

  }

  if(m_launchedInstanceHasBeenSet)
  {
   payload.WithObject("launchedInstance", m_launchedInstance.Jsonize());

  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithObject("lifeCycle", m_lifeCycle.Jsonize());

  }

  if(m_replicationTypeHasBeenSet)
  {
   payload.WithString("replicationType", ReplicationTypeMapper::GetNameForReplicationType(m_replicationType));
  }

  if(m_sourcePropertiesHasBeenSet)
  {
   payload.WithObject("sourceProperties", m_sourceProperties.Jsonize());

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_vcenterClientIDHasBeenSet)
  {
   payload.WithString("vcenterClientID", m_vcenterClientID);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
